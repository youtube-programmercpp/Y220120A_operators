#include <stdio.h>
int f()
{
	//return 1000;//0以外であれば true扱い
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
