#include<iostream>

// prequesite
// 1) Classes
// 2) returning by references.

class foo
{
private:

	int m_x;

public:

	foo(int x) : m_x(x)
	{
	}

	void assignment(int m_x) // In this example we a ambiguity that the member fuction and the fuction argument is same. 
	{		         // Since this is member fuction compiler implicitly adds one more argument ie the *this pointer :- 
		this->m_x = m_x; // void assignment(foo* const this , int m_x)
	}			 // we dont need to explicitly mention the argument and we can access the member via the *this pointer.
				 // so we can now differenciate between the fuction argument and the data member using this pointer.


	foo& add(int x)          // This happens with every member fuction. 
	{ 			 // foo& add(foo* const this, int x)
		m_x += x; 
	
	return *this; 	
	}

	foo& sub(int x) 
	{
		m_x -= x; 
	
	return *this;
	}

	int getX() { return m_x; } 

	void printX() { std::cout << m_x << "\n"; } 
	 
};

int main()
{
	foo ob1(0),ob2(0);

	ob1.assignment(4);  // when we call any member fuction the compiler actually implicitly converts the fuction call to : -
			    // assignment(&ob1 , 4);

	ob1.printX();	

	ob2.add(2).sub(3).add(2).printX();  //	This is called as fuction chaining // m_x(0) + 2 - 3 + 2  // should print 1
					    
		//  Since our add fuction returns a this pointer it is returning nothing but the object itself since this pointer has 
		//  the address of our instance/object. So after from first call it evaluates to something like this :-
		//  ob2.add(2).sub(3).add(2).printX() -> ob2.sub(3).add(2).printX() -> ob2.add(2).printX() -> ob2.printX(). 
		//  then finally prints the m_x value.
return 0;
}
