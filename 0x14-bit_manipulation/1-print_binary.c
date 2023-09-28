#include "main.h"
#include <stdio.h>
/**
 * print_binary - A Function that prints the binary representation
 * of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1UL) + '0');
}
