#include<iostream>

int main()
{
	int a[5]{1,2,3,4,5};

	int (*ptr)[5] = &a; // here paranthesis ensures that ptr is a pointer pointing to array containing 5 elements 
			   // and is not a array of 5 pointer, Array of 5 pointers will be decalred as follows.

	int *p[3]{ &a[0], &a[1], &a[2]};  // This is the declaration of array of 3 pointers in contrast to above example.  


	std::cout << a << '\n' << p[0] << '\n';  // both prints address of 1st element

	std::cout << ptr << '\n';  // even this prints the address of 1st elemnt
	
	std::cout << *ptr << '\n'; // even this prints the address of 1st element
				   // since *ptr = a and a has the same address.

	std::cout << (*ptr)[2] << '\n'; // will print 3 

	std::cout << sizeof(*ptr) << '\n';	// will print size array i.e 20 of a since *ptr = a

	std::cout << sizeof(ptr) << '\n';	// will print 8 which id size of pointer 

	std::cout << *ptr[2] << '\n';   // This will not print 3 but print garbage since this is same as *(*(ptr + 2))
	

	// size of ptr will be the size of array.

/*      This might seem confusing, since our assumtion is that 'a' itself is pointer cointaing address of 1st element say 1000 
				
	// WRONG		i.e     a  [1000]  // value
					    2000   // address

	and when we declare line 7 that is ptr pointing to array that is ptr is pointing to 'a' so ptr will contain value 2000 i.e address  		of 'a' and itself will have some address 

	// WRONG		i.e     ptr [2000]  // value
					     3000   // address

	But when we print ptr in 15 it still print 1000 , this concludes that a itself doesnt have any significance that is having its own 		memory but it decays into ptr to 1st element when we force it or pass it to any function.

	And when we explicitly mention &a its type is pointer to an array and even its address will be equal to 1st elements address.
	
	So to conclude ptr will contain the address of first element and will be of the type pointer to array.

			a = 1000         1     2     3     4     5
		        &a = 1000      1000  1004   1008  1012  1016

					ptr [1000] // value
					     3000  // address

	
	Rarely use pointer to an array */ 
}
