#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Print all of the numbers of base 6 in lowercase
 *  Return: always 0
 */

int main(void)
{
	int m;
	char lc;

	for (m = '0'; m <= '9'; m++)
		putchar(m);

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
