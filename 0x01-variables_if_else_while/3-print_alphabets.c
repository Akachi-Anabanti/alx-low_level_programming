#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; ++lc)
	{
		putchar(lc);
	}

	for (uc = 'A'; uc <= 'Z'; ++uc)
	{
		putchar(uc);
	}

	putchar('\n');

	return (0);
}
