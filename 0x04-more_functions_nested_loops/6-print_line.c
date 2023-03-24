#include "main.h"

/**
 * print_line - prints _ for n times
 * @n: the number of times to print _
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
