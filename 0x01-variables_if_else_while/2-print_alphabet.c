#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
