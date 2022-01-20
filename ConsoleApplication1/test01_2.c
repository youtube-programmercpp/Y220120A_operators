#include <stdio.h>
char g()
{
	return 'A';//１文字（文字コード）を返す 0x41 (65)
}
const char* f()
{
	return "ABC";//文字列が入っているメモリのアドレスを返す
}
int main()
{
	putchar(f()[0]);
	putchar(f()[1]);
	putchar(f()[2]);
	putchar('\n');
}
