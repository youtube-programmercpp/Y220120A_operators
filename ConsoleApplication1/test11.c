#include <stdio.h>
int f()
{
	return 0;
}
int g()
{
	return 1;
}
int main()
{
	f() && g();
}
