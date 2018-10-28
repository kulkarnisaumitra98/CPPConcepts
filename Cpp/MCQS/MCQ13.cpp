#include<iostream>

int pointer(int *ptr)
{
	return *ptr;
}

int main()
{
	int x = 1;

	std::cout << pointer(&(++x)) << " , ";
	std::cout << pointer(&(x++)) << '\n';

return 0;
}

