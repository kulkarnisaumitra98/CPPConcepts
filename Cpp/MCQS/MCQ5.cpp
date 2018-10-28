#include<iostream>

void swap(int **a, int **b)
{
	int *temp = nullptr;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 3;
	int y = 4;

	int *ptr1 = &x;
	int *ptr2 = &y;

	std::cout << x << " " << y << '\n';	

	swap(&ptr1, &ptr2);

	std::cout << x << " " << y << '\n';	
}

// What will be the output ??

/* 1) 3 4
      3 4

   2) 3 4
      4 3

   3) 4 3
      4 3

   4) Compile error.

*/

