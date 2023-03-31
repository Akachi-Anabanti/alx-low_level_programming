#include "main.h"
/**
 * *_strncpy -  copies character of strings
 * @dest: destination string
 * @src: source string [string to be added]
 * @n: number of characters to be copied
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* LCV for src characters */

	while (i <= n && src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
