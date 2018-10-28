#include<iostream>

int fooVal()  // Here we are simply returning by value a copy of x is made while returing.
{
	int x = 3;

return x;
}


int* fooPoi(int a , int *b)  // We are returning here by address.
{
	int x = 3;
	
	int *ptr = new int ;

	// return &x;    // Execution of both of this statements will give us warning since we are returning the address of a local 
	// return &a;    // variable which will be destroyed after the function block. So we should avoid this

return b; // this statement wont give us error since we already recieved the address of x from the main fuction which was copied in b 
	  // and returning it wont cause error. Since the address or memory location was never destroyed since it was defined in
	  // block of main fuction.

return ptr;  // Even this line wont throw warning since the scope of dynamic memory allocation is throughout.
	     // But it wont be executed since we have the earlier return statement would be executed first and function call would end.
}


int& fooRef(int &a) // same rules as that of pointers.
		    // we return by references or pointers when we want to have access of the variable in the fuction even in the fuction
		    // which called it. But take care that its scope doesnt end in the fuction which returned it.
		    // A great example is overloading the subscrpit '[]' operator in operator overloading .
{
	a = 3;
	
return a;
}

int main()
{
	int x = 2;

	fooPoi(3 , &x);

	std::cout << fooRef(x) << '\n';

return 0;
}
