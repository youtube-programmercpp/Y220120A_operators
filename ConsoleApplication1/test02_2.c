#include <stdio.h>
#include <stdbool.h>
bool is_x_100(int x)
{
	return x == 100;
}

int main()
{
	int x = 99;
	if (!is_x_100(x))
		printf("x ÇÕ 100 Ç≈ÇÕÇ†ÇËÇ‹ÇπÇÒÅB\n");


}
