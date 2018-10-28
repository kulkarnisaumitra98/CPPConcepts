#include<iostream>

// overloaded function is the one which has same name as the function which we are overloading but different args or differet arg count

void fun(int y)
{
	std::cout << 1 << '\n';
}

void fun(double y)
{
	std::cout << 2 << '\n';
}

void fun(int x, int y)
{
	std::cout << 3 << '\n';
}

/*int fun(int x)	// return type being different doesnt mean it is overloaded function
{

return 0;
}*/

int main()
{
	fun(1);	  // prints 1
	fun(1.5); // prints 2 
	fun(3,4); // prints 3

return 0;
}
