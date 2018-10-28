#include<iostream>

int check(char ip)
{
	if(ip != 'Y' && ip != 'y' && ip != 'N' && ip != 'n')
	{
		std::cout << "Invalid input\nEnter again :- ";
		return 0;
	}	

	else if(ip == 'N' || ip == 'n')
	{
		return -1;
	}

	return 1;	
}

bool AskIp()
{
	char ip;
	bool flag(false);	

	while(true)
	{
		std::cin >> ip;

		if(check(ip))
		{
			if(check(ip) < 0)
			{
				flag = true;	
				break;
			}
	
			else
			{
				break;
			}
		}

	}
	
	if(flag)
	{
		return true;
	}

	return false;
}

int main()
{
	while(true)
	{
		std::cout << "Hi.Again?\n";

		std::cout << "Want to continue :- ";

		if(AskIp())
		{
			break;
		}	
	}
}
