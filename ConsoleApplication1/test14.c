#include <stdio.h>
void f(int x)
{
	printf("x = %d\n", x);
}
int main()
{
	//宣言
	int a = 10;//ここにある = は代入演算子ではない
	a = 20;//代入演算子
	//代入文ではない

	f(a = 30);
	int b = 10;

	a = (b = 1000) + 1;


	a += 500; //a に 500 が加えられる
	a + 500;//意味が違う


}
