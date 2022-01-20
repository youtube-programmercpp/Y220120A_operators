void f(void)
{
}
void (*g(void))(void)
{
	return f;
}
int main()
{
	int a = 100;
	int b = a++;
	int c = a;

	//void (*p)(void) = f;//ŠÖ”ƒ|ƒCƒ“ƒ^
	//(*p)();
	(*g())();
}
