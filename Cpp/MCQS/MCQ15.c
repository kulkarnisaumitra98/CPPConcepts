#include<stdio.h>

int main()
{
	int x = 1;
	int y = 2;

	int* const ptrX = &x;
	int const* ptrY = &y;

	*ptrX = 3;
	
	ptrY = ptrX;

	printf("%d , %d\n", x , y);

return 0;	
}
