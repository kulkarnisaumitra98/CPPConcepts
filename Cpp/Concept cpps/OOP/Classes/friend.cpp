#include<iostream>

// a friend function is the just like normal function but it can access the private datamembers of the class.
// we use friend functions when we dont need it as a member function but still want to access the members of class.

class foo
{
private:

	int x;

public :

	foo(int _x = 0) : x(_x)
	{
	}

	int getX() { return x; } 

	friend int add(const foo &ob, int y);	// declared it as a friend function
};


int add(const foo &ob, int y)
{
	return ob.x + y;	// since the function is friend it can access private members of class.
}

int noFriendAdd(const foo &ob, int y)
{
//	return ob.x + y;	// cannnot do this as this is not a friend function.
	return ob.getX() + y;   // but we can access x through public function
}


int main()
{
	foo ob(3);

	std::cout << add(ob, 4) << '\n';

return 0;
}
