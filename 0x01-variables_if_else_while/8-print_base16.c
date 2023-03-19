#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on sucessful run
 */
int main(void)
{
	int j;
	int c;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
	}

	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
