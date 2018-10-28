#include<iostream>
// By defalut if we dont mention the inherentance it is private.

class Base
{
public : // can be modified by anyone outside class.
	int m_x;

protected : // can be modified only by Inhereted class and the Base class itself.
	int m_y;
	
private :  // can be modified only by Base class.
	int m_z;
};


class Derived : private Base
{
public :

	// m_x, m_y, m_z all become private.

	Derived()
	{
		m_x = 1; // allowed
		m_y = 2; // allowed
	//	m_z = 3; // not allowed since m_z is private in Base
	}
};


int main()
{
	Derived d;
	
//	d.m_x = 1; // not allowed (private)
//	d.m_y = 2; // not allowed (priavte)
//	d.m_z = 3; // not allowed (private)

return 0;
}
