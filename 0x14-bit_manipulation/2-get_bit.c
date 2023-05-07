#include "main.h"

/**
 * get_bit - gets the bit at an index
 * @n: the number to convert to binary
 * @index: the index
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n / (1UL << index)) & 1);
}
