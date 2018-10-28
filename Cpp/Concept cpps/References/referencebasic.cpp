#include<iostream>

int main()
{
	int x = 3;

	int *ptr = &x;
		
	std::cout << *ptr << '\n';

	int &ref = x; // acts same as pointer, just the syntax is different

	ref = 4; // x is now 4, *ptr = 4(equivalent pointer equation)

	std::cout << ref << '\n';  // prints value of x

	const int y = 4;
	const int &ref1 = y;

return 0;
}
