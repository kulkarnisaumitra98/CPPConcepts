#include<iostream>

// easy

int main()
{
	int x = 10;
	static int y = 10;
		
	{
		int x;
		int y;

		x = 20;
		y = 20;

		std::cout << x << " " ;
	}

	std::cout << x << " ";
	std::cout << y << '\n';
}

// What will be the output??

/*
	1) 20 10 10

	2) 20 20 20
	
	3)Compile error.	
	
	4) 20 10 20

*/
