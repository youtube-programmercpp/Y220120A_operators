#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	if (scanf("%d", &n) == 1) {
		if (n == 0) {
			printf("n = 0 ÇÃÇΩÇﬂåvéZÇ≈Ç´Ç‹ÇπÇÒÅB\n");
		} else {
			printf("%d\n", 999995 % n);
		}
	}
}
