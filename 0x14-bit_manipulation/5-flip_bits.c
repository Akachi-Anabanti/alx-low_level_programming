#include "main.h"

/**
 * flip_bits - A functions that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: the number of bits needed to move from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbits = 0, diff;

	if (n == m)
		return (nbits);
	diff = n ^ m;
	while (diff > 0)
	{
		nbits += diff & 1;
		diff >>= 1;
	}
	return (nbits);
}
