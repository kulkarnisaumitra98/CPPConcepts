#include<iostream>

int main()
{
	
	int x = 0;
	int y = 0;

	if(++x > y++)
	{
		std::cout << "A" << " ";
	}

	if(++x > ++y);
	{
		std::cout << "C" << '\n';
	}

	if(++y > ++x)
	{
		std::cout << "B" << " ";
	}


return 0;
}

// What will be the output ??

/*
	1) A B C
	
	2) A C

	3) Compile error

	4) A

*/
