#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: The number to extract the last digit from
 *
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = -n;
	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
