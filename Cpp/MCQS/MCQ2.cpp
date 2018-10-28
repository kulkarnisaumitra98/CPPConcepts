#include<iostream>
#define SIZE 5

// easy

void swap1(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap2(int a[])
{
	int temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}

int main()
{
	int a[SIZE]{1,2,3,4,5};
	int x(2),y(3);
	
	swap1(x,y);
	swap2(a);

	std::cout << x << " , " << y << '\n';
	std::cout << a[0] << " , " << a[1] << '\n'; 

return 0;
}
// What will be the output of this program ? 

/* 1) Compile error.

   2) 3 , 2
      1 , 2

   3) 3 , 2
      2 , 1

   4) 2 , 3
      2 , 1
*/
      
