#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
	const int ch = getchar();
	if (ch == EOF)
		return EXIT_FAILURE;
	else {
#if 0
		if (isupper((unsigned char)ch))
			printf("入力された文字は大文字でした。\n");
		else
			printf("入力された文字は小文字でした。\n");
#else
		const char* const p = isupper((unsigned char)ch) ? "大文字" : "小文字";
		printf("入力された文字は%sでした。\n", p);
#endif
	}
}
