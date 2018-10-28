#include<iostream>

void swap(int **a , int **b)
{
	int *temp = nullptr;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int *a = new int[3]{1,2,3};
	int *b = new int[3]{4,5,6};

	for(int i = 0; i < 3; ++i)
	{
		std::cout << a[i] << " ";
	}

	std::cout << '\n';

	for(int i = 0; i < 3; ++i)
	{
		std::cout << b[i] << " ";
	}

	std::cout << "\n\n";	

	swap(&a,&b);

	for(int i = 0; i < 3; ++i)
	{
		std::cout << a[i] << " ";
	}

	std::cout << '\n';
	
	for(int i = 0; i < 3; ++i)
	{
		std::cout << b[i] << " ";
	}

	std::cout << '\n';

}
