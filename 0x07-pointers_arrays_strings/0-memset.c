#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the string the be filled
 * @b: the constant byte
 * @n: the number of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pter;

	pter = s;

	for (; n != 0; n--)
	{
		s[n] = b;
	}
	return (pter);
}
