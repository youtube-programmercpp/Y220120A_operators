#include <stdio.h>
int main()
{
	int* p;//�����ɂ��� * �L���͉��Z�q�ł͂Ȃ��i�錾�q�ł���j
	//operator ���Z�q
	//declarator �錾�q
	int a[] = { 100, 200, 300, 400, 500 };
	p = a;
#if 0
	printf("%d\n", *(p+1));


	//putchar(* ("ABC" + 2));
	//putchar(*&"ABC"[1]);

	//sizeof �� size_t �^�Œl��������

	printf("%d\n", (int)sizeof(char));//�K�� 1 �ɂȂ�
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(int));
#endif
	printf("%d\n", (int)(sizeof a / sizeof *a));//�o�C�g�����v�f��
}
