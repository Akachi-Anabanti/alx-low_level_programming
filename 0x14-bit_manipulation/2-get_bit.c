#include "main.h"

/**
 * get_bit - gets the bit at an index
 * @n: the number to convert to binary
 * @index: the index
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; (1UL << i) <= n; i++)
		;
	if (index >= i)
		return (-1);
	return ((n >> index) & 1);
}
