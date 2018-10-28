#include<iostream>
using namespace std;
// Namespaces are used to differenciate between ambigious variable names or fuction call

int doSomething(int a, int b)
{
	return a * b;
}

namespace foo
{
	int doSomething(int a , int b)
	{
		return a + b;
	}
	
}

// using namespace foo;   using declarative statements is a bad practice.

// since if we use them the fuction call to doSomething on line 24 will be ambiguous since we are declaring the statement in the global space
// so always use identifiers i.e on line 27.  


int main()
{
	using namespace std::cout;

	cout << foo::doSomething(3,4) << '\n';
	cout << foo::doSomething(3,4) << '\n';
	
return 0;
}

// One of the main reasons why cout cin and other standard library fuctions were moved to the namespace std was to avoid the ambiguous cases
// so we should alltogether avoid the use of using namespace std; and rather use identifires like std::cout
