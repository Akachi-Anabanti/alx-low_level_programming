#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned int;
 * @b: pointer to the string containing binary;
 * Return: converted number;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) + (*b++ - '0');
	}
	return (num);
}
