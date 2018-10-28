#include<iostream>

int main()
{
	int a[3][3]{1,2,3,4,5,6,7,8,9};
	
	// subcript operator has higher precedence than pointer operator.

	std::cout << *a[2] << '\n';    // *(*(a + 2))  will print 7 // subscript will get evaluated first.
	std::cout << (*a)[2] << '\n';  // *((*a) + 2)  will print 3 // pointer will get evaluated first
	std::cout << a[2][2] << '\n';  // *(*(a + 2) + 2) will print 9

return 0;
}
