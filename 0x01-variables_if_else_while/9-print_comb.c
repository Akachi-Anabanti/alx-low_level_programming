#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful run
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ( i < 57)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		} else {
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
