#include<iostream>

// ignore access specifers for now refer later in accessSpecifiers cpp.

class Base
{
protected : 		
	int m_x;

public :

	Base(int x = 0) : m_x(x)
	{
		std::cout << "I am in Base\n";
	}

	void getName()
	{
		std::cout << "I am Base.\n";
	}

	void BasePartOfDerived()
	{
		std::cout << "I am base part of derived.\n";
	}
};

class Derived : public Base
{
private :
	int m_y;

public :

	Derived(int x = 0,int y = 0) : m_y(y) , Base(x) // We will call the Base Constructor here
	{
		m_x = 1;  // m_x can be can be used and even modified here.	
		std::cout << "I am in Derived.\n";
	}

	void getName()
	{
		std::cout << "I am Derived.\n";
	}
};


int main()
{
	Base b;
	Derived d;
	
	b.getName(); // b will only call base part of getName().
	d.getName(); // d will only call derived part of getName().

	d.BasePartOfDerived(); // we have access to this Base part of derived.

return 0;
}
