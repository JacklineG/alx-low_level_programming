#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - write aphabets in lower case except e and q
 * Return:0 always a success
 */
int main(void)
{
	char small, q, e;

	e = 'e';
	q = 'q';

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != e && small != q)
			putchar(small);
	}
	putchar('\n');
	return (0);
}
