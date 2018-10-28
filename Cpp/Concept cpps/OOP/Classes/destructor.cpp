#include<iostream>

// Destructor is something which is called when the object goes out of scope
// Destructors will generally be used when we are allocating our data member by using "new".
// It is up to us what we have to define in the destructors body just like the constructor.
// So best use of destructor will be to delete the memory which we have asked from the system.


class foo
{
private:
	
	int *_x;

public :

	foo(int x = 0)
	{
		_x = new int(x);
	}

	~foo()
	{
		std::cout << "Destructor called\n";
		delete _x;
	}
};


int main()
{
	{
		foo ob(3);
	}// Destructor gets called


	// What will happen when we are alloacting an foo object using new
	// eg.	
	
	foo *ob1 = new foo(1);
	
	// if we dont delete explicitly the ob1 pointer the destructor wont be called.

	delete ob1;	// destructor is called.

return 0;
}



