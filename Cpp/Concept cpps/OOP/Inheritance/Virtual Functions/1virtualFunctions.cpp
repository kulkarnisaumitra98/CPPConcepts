class Base
{

public:

	virtual const char* getName() { return "Base"; } 
};
 
class Derived: public Base
{

public:

	virtual const char* getName() { return "Derived"; }
};
 
int main()
{
	Derived derived1,derived2;
	Base &rBase1 = derived;
	Base *rBase1 = &derived2;

	std::cout << "rBase1 is a " << rBase1.getName() << '\n';
 	std::cout << "rBase2 is a " << rBase2.getName() << '\n';

return 0;
}

// Since rBase is pointer it will point to base portion of derived annd will call Base::getName() but since we have made our function 
// virtual it will call the most derived version of getName()

