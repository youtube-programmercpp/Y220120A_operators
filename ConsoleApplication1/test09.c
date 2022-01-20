#include <stdio.h>

int main()
{
	int a = 123;
	int b = 123;
	printf("%d\n", a ^ b);
	//L   R    A
	//0 ^ 0 Å® 0
	//0 ^ 1 Å® 1
	//1 ^ 0 Å® 1
	//1 ^ 1 Å® 0
}
