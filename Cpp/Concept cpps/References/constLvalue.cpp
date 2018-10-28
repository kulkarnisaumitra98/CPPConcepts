#include<iostream>

int main()
{
	const int &ref = 3;
//	int &ref = 3;	// Compile error. Cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’.
		
return 0;	
}

// We will generally encounter this problem while passing our arguments to functions, if our parameter is an r value and we are passing it
// as ref and not const ref compiler will immediately throw an error
// So it is highly recommended to make your argument const references so it will handle the r-values and also not modify the arguments.
