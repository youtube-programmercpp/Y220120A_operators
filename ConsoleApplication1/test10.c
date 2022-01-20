#include <stdio.h>
int main()
{

	int a = 2;
	// 8421
	// 0010 (2)
	// 0011 (2) ... 3
	printf("%d\n", a | 1);
	int b = 3;
	// 8421
	// 0011 (2)
	// 0011 (2) ... 3
	printf("%d\n", b | 1);
}
