#include<iostream>

void printMatrix(int **a, int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{		
			std::cout << a[i][j] << " ";
		}
		
		std::cout << '\n';			
	}
}

int main()
{
	int row,col,x;  // for i rows and j columns
	
	std::cout << "Enter rows and columns :- \n";

	std::cin >> row >> col;
	
	int **a = new int *[row]; // return a address which will  point to array of pointers
				  // will contain null pointers by default or garbage.	
	for(int i = 0; i < row; i++)
	{
		a[i] = new int[col];  // assign those pointers // This pointer will have length decided by columns
	}

	// this pointers need not be sequential like we would expect after change in row because new is returning different address every time. check the values in printed values.

	// This approach allows us to reference values using 2 subscripts like a[i][j].
 

	std::cout << "Enter elements\n";

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			std::cin >> a[i][j]; 
		}	
	}

	printMatrix(a,row,col);

	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			std::cout <<  &(a[i][j]) << " "; 
		}
		
		std::cout << '\n';	
	}	

	for(int i = 0; i < row; i++)
	{
		delete[] a[i];
	}

	delete[] a;

return 0;
}
