#include<iostream>

class foo
{
private :
	
	int m_x;
	int m_y;

public :

	foo(int x, int y) : m_x(x), m_y(y)
	{
		// Since private members cant be accessed in main be cant initialize them or assign them there 
		// So we need a public fuction that can do it(Constructors).
		// This type of signature initialization is equivalent to :-
		// int m_x = 3;
		// We can even do :-
		
		m_x = 3;

		// But that will be assignment not initialization and wont work with const variables and refrences.
	}

	foo()
	{
		// if we dont provide and constructor as above compiler implicitly provides a default compiler.
		// A good practice is to always have a default constructor. Can be made by making out own provided Constructors 
		// params default as above.

		// foo(int x = 0, int y = 0)
	}
 

};

int main()
{	
	foo f1; // will call the default constructor;
		// Whenever we initialize a object it will call the constructor.

	foo f2(3,4); // Will call the Constructor that we provided. 

return 0;
}
