#include<iostream>

// easy

int main()
{
	int choice;
	bool flag(false);

	const char *str1 = "foo";

	char str2[3];

	for(int i = 0; i < 3; ++i)
	{
		str2[i] = str1[i];
	}

	      
	while(true)
	{
		
		std::cout << "Enter 1 or 2 : - ";
		std::cin >> choice;
	
		switch(choice)
		{
			case 1:
			{
				str1 = "goo";

				std::cout << str1 << '\n';

			break;
			}

			case 2:
			{
				str2[0] = 'g';

				std::cout << str2 << '\n';
				
			break;
			}
			
			default:
			{
				std::cout << "Invalid input enter again.\n";
				continue;
			}
		}

		break;
	}
}

// What will be the output in the follwing cases??

/*  1) Enter 1 or 2 :- 1
       goo
    
    2) Enter 1 or 2 :- 2
       goo

    3) Both A and B

    4) Compile error.

*/
