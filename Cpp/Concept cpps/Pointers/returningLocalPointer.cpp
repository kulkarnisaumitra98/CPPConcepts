#include<iostream>

int* dangerous1()		//   x	  *ptr
		      //value	     3    1000
		     //memory      1000   2000
{
	int x = 3;
	int *ptr = &x;
	
return ptr;
}

int* dangerous2()		//   x	  *ptr
		      //value	     4    1000
		     //memory      1000   2000
{
	int x = 4;
	int *ptr = &x;

return ptr;
}

int* dangerous3()		//   x
				//   5
				// 1000
{
	int x = 5;
	
return &x;
}

int main()
{
	int *c = dangerous2();
	int *b = dangerous1();

	std::cout << *b << '\n';

	int *a = new int[5]{1,2,3,4,5};			// Some random extra 
	const char *string = "Hello my nigga\n";	// lines of code.
	
	std::cout << *c << '\n';

	// dangerous3();

	delete[] a;	

return 0;
}

// Obviously if we obsereve the code none of should print the value referenccing a value which is out of scope.
// Lets make 3 observations :-

// 1) On line 28 we return the copy of the value of ptr in dangerous2() in c and dont dereference it immediatly
// 2) On line line 29 to 31 we return the copy of the value of ptr in dangerous1() in b and immediatly deref. it.
// 3) In dangerous3() we are returning the address of x without the ptr.

// so first obsevation works intuitivly and when line 36 is executed *c prints 0 as expected.
// but line 31 prints 3 
// What actually happens is that we immediatly call cout *b after calling dangerous2, nothing has replaced that memory or that memory is unused.
// But the case with *c is that we replace the memory with few random lines of code and the value 4 is gone forever.

// Both of the above 2 observations are actually harmless and since we are returning the memory through pointer but in obv. 3 
// we directly return the address by &x and if we execute the fuction it will give segfault error as expected. And even warn us about it.

