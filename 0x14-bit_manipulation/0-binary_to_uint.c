#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: The converted number or 0 id there is one or more chars
 * in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		/*check if value of b is 1 0r 0*/
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) + (*b++ - '0');
	}
	return (n);
}
