#include <stdio.h>
int main()
{
	int* p;//ここにある * 記号は演算子ではない（宣言子である）
	//operator 演算子
	//declarator 宣言子
	int a[] = { 100, 200, 300, 400, 500 };
	p = a;
#if 0
	printf("%d\n", *(p+1));


	//putchar(* ("ABC" + 2));
	//putchar(*&"ABC"[1]);

	//sizeof は size_t 型で値が得られる

	printf("%d\n", (int)sizeof(char));//必ず 1 になる
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(int));
#endif
	printf("%d\n", (int)(sizeof a / sizeof *a));//バイト数→要素数
}
