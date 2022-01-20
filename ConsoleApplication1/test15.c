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
	// &&, ||, ? : ‚Æ“¯‚¶‚­¶‚©‚ç‰E‚É‡‚É•]‰¿‚³‚ê‚é
	int x;
	x = (f(), g(), h());
	f(), g(), h();
}
