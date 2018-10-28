#include<iostream>

void fooVal(int x , int y) // we are passing the arguments via value. This simply means that we are making copies of the 
			// arguments and we dont have access to change the values which we passed.
{			
	x = 3;  // This will simply change the values in this fuction itself, after the fuction call is completed The values of x 
	y = 4;  //  and y in main fuction will remain the same.
		// the x in main and x in this foo fuctions are totally different varibales.
		// It doesnt matter even if we use different names like a and b for x and y
}

void fooPoi(int *a, int *b) // here we are passing arguments by address ie we are having access to the memory locations.
			 // The rule is if we have access to memory location which will  be stored in pointers we can
			 // modify them.
{			 
			 
	*a = 3;		 // referening them using pointers and then modifing x and y;
	*b = 4;
}


void fooRef(int &x, int &y) // This is passing by reference.
			 // It works same as pointers. 
{
	x = 5;
	y = 6;

}

int main()
{
	int x{1},y{2};
	
	std::cout << "Earlier values of x is " << x << " and y is " << y << " .\n";

	std::cout << "passing by value...\n";

	fooVal(x,y);  

	std::cout << "Later value of x is " << x << " and y is " << y << ".No change in values.\n";  // values dont change.

	std::cout << "passing by address...\n";
	
	fooPoi(&x,&y); // passing the address of x and y using '&' operator.

	std::cout << "Later value of x is " << x << " and y is " << y << ".Change in values.\n";   // values changed now
	
	std::cout << "passing by reference...\n";
	
	fooRef(x,y);

	std::cout << "Later value of x is " << x << " and y is " << y << ".Change in values.\n";   // values changed now
	
	
}
