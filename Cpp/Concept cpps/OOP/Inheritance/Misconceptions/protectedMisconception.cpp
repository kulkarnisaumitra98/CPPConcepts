#include<iostream>

class Base
{
protected :

	int x;

public :

	Base(int _x = 0) : x(_x)
	{
	}

	void printBase()
	{
		std::cout << x << '\n';
	}	
};


class derived : public Base
{
private :
	Base ob;		// has Base obect as a member function

public :

	derived(int _x = 0) : Base(_x) { } // initializes base member x
	


	void WRONGprintBase()		
	{
//		std::cout << ob.x << '\n';  
	}

	/* Even though we might think the above line is harmless and that since x is protected we can use it in derived class, NO.
	   What we are doing is creating a base class object in the derived and accessing the member through that object, since x 
	   is protected here we wont be able to do that here, it is only allowed in the class it is defined in. To address x we can 
	   directly write x as below since derived is one part derived and one part base.
	*/

	void printBase()	// Correct print function
	{
		std::cout << x << '\n';
	} 

};

	/*
		Basically we would run into this mistake whenever there is a has-a relationship or aggregation
		eg. Department has a teacher

		eg. Most common mistake that I commited was of Linked List , we have two classes, class Node and class 
		    LinkedList and LinkedList has-a node so this is aggregation and we wont at all need inheretance
		    we would just need to instanciate the Node object( head ) like in this case and to access the members of Node 
		    we would add getter function like getNext() , getPrevious() , getData()
	*/

int main()
{
	Base obB(5);
	obB.printBase();

	derived obD(4);
	obD.printBase();

return 0;
}
