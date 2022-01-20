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
			printf("“ü—Í‚³‚ê‚½•¶š‚Í‘å•¶š‚Å‚µ‚½B\n");
		else
			printf("“ü—Í‚³‚ê‚½•¶š‚Í¬•¶š‚Å‚µ‚½B\n");
#else
		const char* const p = isupper((unsigned char)ch) ? "‘å•¶š" : "¬•¶š";
		printf("“ü—Í‚³‚ê‚½•¶š‚Í%s‚Å‚µ‚½B\n", p);
#endif
	}
}
