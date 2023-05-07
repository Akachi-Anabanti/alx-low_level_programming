#include "main.h"

/**
 * flip_bits - return the number of bits needed
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int fliper = n ^ m;
	unsigned int i = 0;

	while (fliper)
	{
		if (fliper & 1)
			i++;
		fliper >>= 1;
	}
	return (i);
}
