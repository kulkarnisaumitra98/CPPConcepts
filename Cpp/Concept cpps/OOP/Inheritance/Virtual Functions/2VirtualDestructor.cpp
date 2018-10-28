#include<iostream>

class Base
{
public:
	
	virtual ~Base() { std::cout << "Base destructor called\n"; }	// made virtual
};

class Derived : public Base
{
private:

	int *arr;
	int length;

public :

	Derived(int len) : length(len)
	{
		arr = new int[length];
	}

	virtual ~Derived()
	{
		std::cout << "Derived Destructor called\n";
		delete[] arr;
	}
};


int main()
{
	Derived *derived = new Derived(5);
   	Base *base = derived ;
    	delete base;	// since we are deleting only base pointer and if we hadnt made our base destructor virtual then
			// only base destructor would have been called. But we are deleted arr in derived so by making base destructor 				// virtual it calls the most derived destructor first. 
}
