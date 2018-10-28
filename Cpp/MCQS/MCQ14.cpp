#include<iostream>

int main()
{
	const char* string = "string";

	char ip = string[6];

	if(ip)
	{
		std::cout << ip << " ";
	}

	if(ip++)
	{
		std::cout << "B" << " ";
	}

	if(++ip)
	{
		std::cout << "C" << '\n';
	}

return 0;	
}
