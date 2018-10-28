#include<iostream>
#include<cstdlib>
#include<ctime>

int getrandom(int min,int max)
{
	static const double f=1.0/(static_cast<double>(RAND_MAX)+1.0);

return min+static_cast<int>((max-min+1)*(rand()*f));
}

int main()
{
	srand(static_cast<unsigned int>(time(0))); 
  
	std::cout<<getrandom(1,52);

return 0;s       
}
