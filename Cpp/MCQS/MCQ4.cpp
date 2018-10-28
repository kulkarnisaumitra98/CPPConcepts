#include<iostream>

// medium

bool foo(int a, int b)
{
	if(a > b)
	{
		return true;
	}

}

int main()
{
	if(foo(4,2))
	{
		std::cout << "A";
	}

	else if(5)
	{
		std::cout << "B";
	}


	if('a' , 'A')
	{
		std::cout << "C" << '\n';
	}

return 0;
}

// What will be the output.

/*
    1) ABC

    2) AC

    3) Compile error.

    4) A
     
 */


