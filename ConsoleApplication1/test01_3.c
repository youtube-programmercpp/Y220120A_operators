struct sample {
	int a;
	int b;
};
struct sample* f()
{
	static struct sample x = { 1000, 2000 };//�ÓI�ϐ�
	return &x;
}
#include <stdio.h>
int main()
{
	struct sample x, y;
	x.a = 10;//����c��������
	x.b = 30;//����c��������
	y.a = 20;//����c��������
	y.b = 60;//����c��������

	printf("%d\n", x.a);//�ǂݏo��
	//�A�N�Z�X�c�ǂݏ���

	struct sample* p;
	p = &x;
	printf("%d\n", p->b);

	p->b = 100;
	printf("%d\n", p->b);

	printf("%d\n", f()->b);


}
