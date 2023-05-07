#include "main.h"

/**
 * clear_bit - clears the bit at a given index
 * @n: pointer to the number
 * @index: index starting from 0
 * Return: 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1 << index;
	*n &= ~mask;
	return (1);
}
