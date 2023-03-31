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
	int len_dest = 0; /* length of the destination string*/
	int i = 0; /* LCV for src characters */
	int len_src = 0; /* length of src */

	while (dest[len_dest] != '\0')
		len_dest++; /* increment the length */

	while (src[len_src] != '\0')
		len_src++;
	while (i <= n - 1)
	{
		dest[i] = src[i];

		i++;
	}
	return (dest);
}
