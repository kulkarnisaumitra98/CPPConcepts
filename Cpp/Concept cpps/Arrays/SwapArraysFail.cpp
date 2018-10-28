#include<iostream>

// Here we are trying to swap the arrays.

void swap(int (**a)[3], int (**b)[3])
{
	int (*temp)[3] = nullptr;

	temp = *a;
	*a = *b;
	*b = temp;	
}

int main()
{
	int a[3]{1,2,3};
	int b[3]{4,5,6};
	
	//       (array itself)   *ptr1     **a        //       (array itself)   *ptr2     **b      
	//             a          1000     2000	       //             b          1001     2001
	//           1000         2000	   3000        //           1001         2001	  3001	
		
	int (*ptr1)[3] = &a;  
	int (*ptr2)[3] = &b;

	std::cout << ptr1 << " " << &a << " and " << ptr2 << " " << &b << '\n';

	swap(&ptr1 , &ptr2);

	//       (array itself)   *ptr1     **a        //       (array itself)   *ptr2     **b      
	//             a          1001     2000	       //             b          1000     2001
	//           1000         2000	   3000        //           1001         2001	  3001	


	std::cout << ptr1 << " " << &a << " and " << ptr2 << " " << &b << '\n';
}


// We can see that the address of a and b have been swapped through pointers but we quickly realize that we are only able to change the 
// Addresses through pointers that is only the values of ptr1 and ptr2 but not actually swapping the memory location of a and b

// THE RESULT WE WERE EXPECTING : -

// 	//       (array itself)   *ptr1     **a        //       (array itself)   *ptr2     **b      
	//             a          1001     2000	       //             b          1000     2001
	//           1001         2000	   3000        //           1000         2001	  3001	


// But now that we see it seems dumb what were we trying to do, The next thing that strikes was to swap a and b (by goining one memory level
// down) itself, we soon again realize that when we pass swap like this swap(ptr1,ptr2);  and access it like *a = *b in swap fuction we are 
// actually assigning arrays which is not allowed , since *a in swap will be pointing to 'a' array itself.

//  BOTTOM line we cannot swap arrays normally, we can swap we are accessing arrays dynamically.
