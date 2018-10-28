#include<iostream>

int recursion(int x = 1)
{
	static int count = 0;
	++count;

	if(count > 3)
	{
		return count;
	}

	if(x <= 0)
	{
		recursion(x + 2);
	}

	recursion (x - 1);	
}


int main()
{
	std::cout << recursion() << '\n';
	
return 0;
}

// What will be the output ??

/*
	1) 3
	
	2) Segmentation fault

	3) 4

	4) 5

*/
