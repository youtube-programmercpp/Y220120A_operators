#include <stdio.h>

int main()
{
	int a = 123;
	int b = 123;
	printf("%d\n", a ^ b);
	//L   R    A
	//0 ^ 0 �� 0
	//0 ^ 1 �� 1
	//1 ^ 0 �� 1
	//1 ^ 1 �� 0
}
