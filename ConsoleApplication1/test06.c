#include <stdio.h>
int main()
{
	int x = 0x55;
	//8421 8421 
	//0101 0101 (2)
	//   5    5 (16)
	printf("%X\n", x);

	x >>= 1;
	//8421 8421 
	//0010 1010 (2)
	//   2    A (16)
	printf("%X\n", x);
}
