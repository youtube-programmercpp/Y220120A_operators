#include <stdio.h>
int main()
{
	int a = 0;
	int b = ++a;
	int c = 100;
	printf("%d\n", ++c);
	printf("%d\n", c);

	int x = 123;
	printf("%d\n", -x);
	printf("%d\n", +x);
}
