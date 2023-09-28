#include "main.h"

/**
 * get_endianness - get ehed endianness of the system
 * Return: 0 on big endian else 1
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	return (0);
}
