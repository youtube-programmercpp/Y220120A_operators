#include <stdio.h>
char g()
{
	return 'A';//�P�����i�����R�[�h�j��Ԃ� 0x41 (65)
}
const char* f()
{
	return "ABC";//�����񂪓����Ă��郁�����̃A�h���X��Ԃ�
}
int main()
{
	putchar(f()[0]);
	putchar(f()[1]);
	putchar(f()[2]);
	putchar('\n');
}
