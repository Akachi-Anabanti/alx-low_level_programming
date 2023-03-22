#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: The number to be printed
 *
 * Return: 1 if n is +ve, 0 if n is 0 otherwise -1
 */
int print_sign(int n)
{
	signed int i = -1;

	if (n < 0)
	{
		_putchar('-');

		return (i);

	} else if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	_putchar(48);

	return (0);
}
