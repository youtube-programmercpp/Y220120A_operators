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
	// &&, ||, ? : と同じく左から右に順に評価される
	int x;
	x = (f(), g(), h());
	f(), g(), h();
}
