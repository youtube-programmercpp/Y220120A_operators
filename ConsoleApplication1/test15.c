int f()
{
	return 0;
}
void g()
{
}
int h()
{
	return 12345;
}
int main()
{
	// &&, ||, ? : �Ɠ�����������E�ɏ��ɕ]�������
	int x;
	x = (f(), g(), h());
	f(), g(), h();
}
