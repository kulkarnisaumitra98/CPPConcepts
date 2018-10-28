#include<iostream>

class Base
{
private:

	int _x;

	Base(int x = 0) : _x(x) {} 
	
};


int main()
{
	Base *b1;	// we can successfully declare a Base*, this does not invoke constructor.

return 0;
}
