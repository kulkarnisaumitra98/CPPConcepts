#include<iostream>

class A
{

protected : 
	
	int m_x;

public : 
	
	A(int x = 0) : m_x(x)
	{
		std::cout << "In A\n";
	}

	int getA() {return m_x;}
};


class B : private A // Here Class B is one part B and one part A and we are inheriting it privately so m_x will become inaccessible here on.
{

public :

	B(int x = 0) : A(x)
	{
		std::cout << "In B\n";
	}
};


class C : public B
{

public :
	
	C(int x = 0) : B(x) //, A(x)  also we can only construct base classes in derived which are the direct base cases
			    //	      as in this case it is B, So we cannot directly construct A(x) 
	{
		std::cout << "In C\n";
	}

	void doSomething()
	{
	//	std::cout << m_x << '\n';	// This will not work since A is inherited privately so m_x now inaccsiible.
						// If A were accessed publicly or protectedly this would have compiled
	}

};

int main()
{
	C c(3);
	c.doSomething();	

return 0;
}
