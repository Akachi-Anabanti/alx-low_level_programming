#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian or 1 if small endian
 */
int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);
	return (0);
}
