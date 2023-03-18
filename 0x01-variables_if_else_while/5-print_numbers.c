#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int i = 0;

	do {
		printf("%i", i);

		++i;

	} while (i < 10);

	putchar('\n');

	return (0);
}
