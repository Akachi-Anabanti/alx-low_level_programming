#include "main.h"

/**
 * print_diagonal - prints \ for n times
 * @n: the number of times to print _
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			i++;
		}
	}
	_putchar('\n');
}
