#include<iostream>

int main()
{	// 1
	char arr[10] = "Hello";	// in this case the string here "Hello" isnt treated as const string literal but
				// it is treated as an array of characters. Since below we can se we are able to modify it.

	arr[0] = 'j';

	std::cout << arr << '\n';	// we will accept it to print the base address but it will print jello.
	std::cout << arr + 1 << '\n';	// This will print "ello"
	
	//	char *str = "Hello";	will throw a warning since in this case it is treated as a string literal
	//				and is of the type const char*, though this wont throw warning in C.


	// 2
	const char *str = "Hello";	// This is correct.
	// In this we might think that we cannot change the value of str.
	// but here *str is const and the pointer itself isnt constant
	// meaning that we cant change value through pointer i.e *str = 'j'
	// but we can change the calue of str itself.

//	*(str + 1) = 'i'	// not allowed
	
	str = "Jello";	// allowed since pointer isnt constant.

	
	// 3
	std::string str1 = "Hello";	// string is a class in c++ and str1 is treated as an object.
	std::string str2 = "hello";	// It is overloaded with all the operations.

	str1 += str2;	// concatenates string
	str1 == str2;	// compares string.	

return 0;
}
