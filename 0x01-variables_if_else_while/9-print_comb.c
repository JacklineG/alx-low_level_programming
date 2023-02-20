#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - All possible combinations of a single digit number
 * Return: 0 always
 */

int main(void)

{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')
		{
			putchar(',');
			putchar('');
		}
	}
	putchar ('\n');

	return (0);
}
