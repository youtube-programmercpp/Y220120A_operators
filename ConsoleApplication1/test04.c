#include <stdio.h>
#include <string.h>
int main()
{
	//ポインタ＋整数
	//'7' の ASCII コードが得られる
	//そこから '0' の ASCII コードを引く
	//結果として 7 という値が得られる
	printf("%d\n", *("9876" + 2) - '0');
	static const char s[] = "TEST";
	printf("%d\n", (int)(strchr(s, 'S') - s));
	// s    -  s    は 0 である
	//&s[0] - &s[0] は 0 である
	//&s[2] - &s[0] は 2 である
}
