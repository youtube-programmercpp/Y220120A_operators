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
			printf("���͂��ꂽ�����͑啶���ł����B\n");
		else
			printf("���͂��ꂽ�����͏������ł����B\n");
#else
		const char* const p = isupper((unsigned char)ch) ? "�啶��" : "������";
		printf("���͂��ꂽ������%s�ł����B\n", p);
#endif
	}
}
