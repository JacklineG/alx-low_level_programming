#include <stdio.h>
#include <stdlib.h>
#include <tim.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);
	putchar('\n');
	return (0);
}
