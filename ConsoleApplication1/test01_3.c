struct sample {
	int a;
	int b;
};
struct sample* f()
{
	static struct sample x = { 1000, 2000 };//静的変数
	return &x;
}
#include <stdio.h>
int main()
{
	struct sample x, y;
	x.a = 10;//代入…書き込み
	x.b = 30;//代入…書き込み
	y.a = 20;//代入…書き込み
	y.b = 60;//代入…書き込み

	printf("%d\n", x.a);//読み出し
	//アクセス…読み書き

	struct sample* p;
	p = &x;
	printf("%d\n", p->b);

	p->b = 100;
	printf("%d\n", p->b);

	printf("%d\n", f()->b);


}
