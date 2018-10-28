#include<iostream>

class Base
{
public : // can be modified by anyone outside class.
	int m_x;

protected : // can be modified only by Inhereted class and the Base class itself.
	int m_y;
	
private :  // can be modified only by Base class.
	int m_z;
};


class Derived : public Base
{

public :
	// The access specifiers that were in the Base class remain same in derived class.
	// i.e

	// m_x is public
	// m_y is protected.
	// m_z is private.

	Derived()
	{
		m_x = 1; // allowed
		m_y = 2; // allowed
	//      m_z = 3; // not allowed since m_z is private in Base
	}
};


int main()
{
	Derived d;

	d.m_x = 1; // allowed
//	d.m_y = 2; // not allowed since protected.
//	d.m_z = 3; // not allowed since private.

}
