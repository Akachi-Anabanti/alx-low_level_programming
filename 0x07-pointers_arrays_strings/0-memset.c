#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * @s: the string the be filled
 * @b: the constant byte
 * @n: the number of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	static char *pter;

	pter = s;

	for (; n != 0; n--)
	{
		s[n] = b;
	}
	s[n] = b; /* at n = 0 */

	return (pter);
}
