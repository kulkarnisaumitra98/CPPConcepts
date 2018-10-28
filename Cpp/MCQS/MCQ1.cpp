#include<iostream>

// Medium

int main()
{
	int a[3]{1,2,3};
	int b[3]{4,5,6};
	int c[3]{7,8,9};

	int *ptr[3] = {a,b,c};

	std::cout << *(ptr + 1)[1] << '\n';
	std::cout << ptr[1][1] << '\n';

return 0;
}

// What will be the output of this programs ?

/* 1) 5 , 5
   2) 2 , 2
   3) 7 , 5
   4) 5 , 7
*/
