#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the number
 * @index: index
 * Return: 1 on success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return(-1);
	*n |= (1 << index);
	return (1);
}
