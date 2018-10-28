#include<iostream>

void printArray(int *a, int length) // accepting array by pointers. // This generally the most preferred way to accept the arrays since :-
				    // firstly we dont need to explicitly mention the size of array.
				    // and we get asscess to memory locations of elements and we can even modify them;
{
	for(int i = 0; i < length; ++i)
	{
		std::cout << a[i] << " ";  // the subscript operator is eqivalent to or decays to *(a + i) = a[i] pointer reference.
	}

	std::cout << '\n';
} 

void printArray2(int a[5], int length)  // This might seem that we are passing by value but no. We cant pass arrays by values and even in 					        // this case 'a' is treated as a integer pointer.So we have access to memory locations even in this 						// case and we can modify them.
{			   	       				
		      	
	// int length = sizeof(a)/sizeof(a[0]);   // this wont work because a is treated as integer pointer and we want size of the entire 
						  // array. This only works in main fuction where decaying doesnt take place.
	for(int i = 0; i < length; ++i)
	{
		std::cout << a[i] << " ";  // the subscript operator is eqivalent to or decays to *(a + i) = a[i] pointer reference.
	}

	std::cout << '\n';
} 


int main()
{
	int a[5]{6, 1, 9, 7, 5};
	
	int length = sizeof(a)/sizeof(a[0]); // Here a is treated as an array and returns size properly.

	printArray(a,length);  // when we pass 'a' as a parameter to the print fuction it decays into pointer to array or technically 
			       // the first element. 
	printArray2(a,length);
}
