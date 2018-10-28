#include<iostream>
#include<stdio.h>

int main()
{
	int x = 5;
	int y1, y2, y3, y4, y5, y6;

	y1 = x++;	// y1 will store 5.	because x is evaluated first and then incremented(now 6)	
	y2 = ++x;	// y2 will store 7.	because x is incremented first(now 7) then evaluated later.

	// x++ operator function returns and r value that is the copy
	// where as ++x operator function returns l value which is a reference.
	// so whatever is the final value of x ++x and x will be replaced by it but not x++ beacuse it is an r value.

	// eg.

	x = 5;

	printf("%d,%d,%d,%d,%d,%d\n", x, ++x, x++ , ++x, x++, x);
	// since comma so operation will be right to left
	// so first x is evaluated that is 5, then again 5 , then 7, then again 7, then 9 and finally again 9
	// so 9,9,7,7,5,5
	// but all the l values that is ++x and x will be replaced by the final x that is evaluted in this case 9.
	// so final output is
 
	// 9,9,7,9,5,9 // 

	// also

	x = 5;
	y3 = x++ + x++;	// will evalute to 5 + 6 that is 11
	
	std::cout << y3 << '\n';

	x = 5;
	y4 = x++ + ++x; // will evalute to 5 + 7 that is 12

	std::cout << y4 << '\n';
	
	x = 5;
	y5 = ++x + x++; // will evalute to 6 + 6 but last value of x is 7 so 7 + 6 so 13
	
	std::cout << y5 << '\n';

	x = 5;
	y6 = ++x + ++x;	// will evalute to 6 + 7 but last value of x is 7 so 7 + 7 so 14

	std::cout << y6 << '\n';

return 0;	
}
