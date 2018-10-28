#include<iostream>

int main()
{

//	const int a;	this line wont compile since we cant assign the value to a later, since it is const 
	const int a = 3;

//	int &ref;	// even this doesnt work.	
	const int &ref = a; 

return 0;
}
