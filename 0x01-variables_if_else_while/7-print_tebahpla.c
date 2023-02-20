#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - lowercase alphabet in reverse
 * return:0 always
*/

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');
	return (0);
}
