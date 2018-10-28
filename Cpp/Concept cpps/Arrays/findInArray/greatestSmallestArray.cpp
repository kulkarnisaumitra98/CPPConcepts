#include<iostream>

// prerequisite 
//1)arrays to functions
//2)references and pointers.
//3)Dynamic memory allocation.


int greatest(int *array, int length)  // passing array by address.The address is same as that of first element in the array.
{
	int i = 0; // we initialise a index to keep track of the index of the biggest element.
 
	for(int j = i + 1; j < length; ++j) // we start comparing the first element to rest of the elements.
	{
		if(array[j] > array[i])  // we can access elements using subscripts  even in passing by address
		{
			i = j; // if we find a element greatest than the first element we remember its index and start searching from 
		}	       // the number after it(since j = i + 1)
	}

return array[i]; // 
}

//  5 2 1 6 8

int smallest(int (&array)[6]) // passing by reference to array of 6 elements.
{	
	int i = 0;

	for(int j = i + 1; j < sizeof(array)/sizeof(array[0]); ++j)
	{
		if(array[j] < array[i])  // we can access elements using subscripts  even in passing by address
		{
			i = j;
		}
	}

return array[i];
}

int main()
{
	int length{0};

	std::cout << "Enter length : ";

	std::cin >> length;

	int a[6]{7,3,10,18,1,43};  // static allocation if you know the size already.
	int *ptr = new int[length];     // dynamaic allocation gives us the freedom of chossing variable size and larger sizes on heap.

	std::cout << "Enter elements.\n";

	for(int i = 0 ; i < length; ++i)
	{
		std::cin >> ptr[i];
	}

	std::cout << greatest(ptr,length) << '\n';
	std::cout << smallest(a) << '\n';

}
