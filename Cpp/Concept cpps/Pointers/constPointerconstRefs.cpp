#include<iostream>

int main()
{
	// 1) References and pointers to constant variables.

	const int a = 3;      // this is a const variable whose value cant be changed .
//	a = 4		      // this line would give error
	const int *ptr = &a;  // a pointer to a constant variable. 

	// *ptr = 4           // you cant change the value of a const variable through a pointer reference.
	// This would work even though a isnt a constant.




	// similar is the case with references.
	const int A = 3;
	const int &ref = A;

	// 2) Constant Pointers and References.
	// Here the pointer inself is constant and it cant point to any other value.

	int b = 3;
	int *const ptr2 = &b;
	
	// ptr2 = &a  ;         // not allowed to change what you are pointing to.

}


