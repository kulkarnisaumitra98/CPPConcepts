#include<iostream>

// to check while taking the input if the number is already present in the string.

int main()
{
	int a[5];
	
	for(int i = 0; i < 5; ++i)  //  1 2 ?
	{
		while(true)
		{
			bool x = false;	// to check if the if loop is executed.
	
			std::cin >> a[i];	
	
			for(int j = 0; j < i; ++j)
			{
				if(a[i] == a[j])
				{
					x = true; // is executed then break, we have to have a bool variable since
						  // it might also be the case that the for loop  actally completed 
						  // executing the loop without ever entering the if loop so we wont be able
						  // to differentiate between break and for loop being completed.
					break;
				}
			}
			
			if(x) // if number already present then again ask for input.
			{
				std::cout << a[i] << " already present enter other number" << std::endl;
					
				continue;
			}
			
			else
			{
				break;
			}			
		}
	}

return 0;
}
