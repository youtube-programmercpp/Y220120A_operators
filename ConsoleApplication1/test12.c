#include <stdio.h>
int f()
{
	//return 1000;//0�ȊO�ł���� true����
	return 0;
}
int g()
{
	return 5000;
}
int main()
{
	int x = f() || g();
}
