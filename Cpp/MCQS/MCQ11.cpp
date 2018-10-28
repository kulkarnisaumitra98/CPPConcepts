#include<iostream>

void swap(int (**ptrA)[1], int (**ptrB)[1])
{
	int (*temp)[1] = nullptr;
	
	temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp;

}
	

int main()
{
	int a[1]{1};
	int b[1]{4};

	int (*ptrA)[1] = {&a};
	int (*ptrB[1])[1] = {&b};

	swap(&ptrA,&ptrB[0]);

	std::cout << (*ptrA)[0] << " " << (*ptrB)[0] << '\n';
	std::cout << a[0] << " " << b[0] << '\n';

return 0;
}

// What will be the output ?

/* 1) 1 some address value
      4       1       
      
   2) 4 some address value
      1       4
      
   3) 4 1
      1 4

   4) 4 1
      4 1

*/
      
