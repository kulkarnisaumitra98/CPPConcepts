#include<iostream>

int main()
{
	int a[5]{3,7,9,12,14};		/*  This two arrays need to be sorted either in ascending or desending */
	int b[8]{1,2,4,6,7,8,10,13};	    

	int merged[13];  // The new array will be merged so we will have size = size1 + size2

	int k1(0),k2(0);

	// Basically we are iterating through the merged for loop
	// we will compare the elements of the 2 arrays 1 by 1 
	// is 1 < 3
	// add 1
	// is 2 < 3
	// add 2
	// is 4 < 3
	// add 3

	// This way we right the logic.

	for(int i = 0; i < 13; ++i)
	{
		if(k1 == 5)					// if array one has finished iterating we add the remaining 
								// elements from array 2 to the merged array.		
		{
			while(k2 != 8)
			{
				merged[i++] = b[k2++]; 
			}
		}

		if(k2 == 8)					// same as above.
		{
			while(k1 != 5)
			{
				merged[i++] = a[k1++]; 
			}
		}

		if(a[k1] <= b[k2])				
		{
			merged[i] = a[k1++];
		}
	
		else
		{
			merged[i] = b[k2++];
		}
	}

	for(int i = 0; i < 13; ++i)
	{
		std::cout << merged[i] << " ";
	}

	std::cout << '\n';

return 0;
}
