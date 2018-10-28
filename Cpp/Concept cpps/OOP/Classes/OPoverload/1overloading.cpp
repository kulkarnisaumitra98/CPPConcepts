#include<iostream>

// we use operator overloading to redefine the operator functions for our user defined class
// eg. our class is foo
// and ob1 and ob2 are objects so we define funtionality for ob1 + ob2 or [ob1 (any operator which we want to overload) ob2]  

class foo
{
private:

	int _x;

public :

	foo(int x = 0) : _x(x)
	{
	}

	void print()
	{
		std::cout << _x << '\n';
	}

	friend foo operator+(const foo &ob1, const foo &ob2);

	friend ostream& operator<<(const ostream &out, const foo &ob);
	
	friend istream& operator>>(const istream &in, foo &ob);
};


foo operator+(const foo &ob1, const foo &ob2)	// syntax of operator function, this funnction is now overloaded so that it works for
						// our defined class
{
	foo temp(ob1._x + ob2._x);

return temp;
}


ostream& operator<<(const ostream &out, const foo &ob)	// same with insertion operator, but we return the ostream object by reference so we
							// can chain it like out << "fgdjsk" << "\n";( this is called chaining )
{							// We could have returned it by value as well to facilitate chaining
	out << ob.x << '\n';				// But the ostream and istream's constructors are PROTECTED so we cannot call
							//  them, so we can either declare them as references or pointers, so constructors
return out;						// are not invoked, so we cannot pass by value, which will invoke copy cosnstructor.
}

// we need to make the reference object const in above insertion operator since we may pass r value 
// eg. std::cout << ob + ob1 << '\n'; 
// here ob + ob1 calls overloaded operator+ which returns a copy which a r value. 

istream& operator>>(const istream &in, foo &ob)	// we dont pass in const object in extraction operator since we have to change its value.
{
	in >> ob.x;

return in;
}


int main()
{
	foo ob1(4);
	foo ob2(3);
	foo ob;
	foo ob3;

	ob3 = ob1 + ob2;

	std::cout << ob3 << '\n';
	
	std::cin >> ob;

	std::cout << ob + ob1 << '\n';

return 0;
}
