#include<iostream>

// easy

void doSomething(int x = 10, int y)
{
	std::cout << x << " , " << y << '\n';
}

int main()
{
	doSomething(20);
	doSomething(20,10);
	
return 0;
}

// What will be the output ??

/* 1) Compile error.

   2) 20 , 0
      20 , 10

   3) 10 , 20
      20 , 10

   4) 20 , 0
      10 , 20
*/ 
