#include<iostream>

int main()
{
	int a = 0, b = 1;
	int c;
	int n;

	std::cin >> n;

	std::cout << a << " " << b << " ";

	for(int i = 0; i < n; ++i)
	{
		c = a + b;
		a = b;
		b = c;

		std::cout << c << " ";
	}

	std::cout << '\n';

return 0;
}
