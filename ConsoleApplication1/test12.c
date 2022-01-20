#include <stdio.h>
int f()
{
	//return 1000;//0ˆÈŠO‚Å‚ ‚ê‚Î trueˆµ‚¢
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
