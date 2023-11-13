#include "main.h"
/**
 * *_strncat -  concatenates two strings to n character
 * @dest: destination string
 * @src: source string [string to be added]
 * @n: number of characters to be added
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0; /* length of the destination string*/
	int i = 0; /* LCV for src characters */
	int len_src = 0; /* length of src */

	while (dest[len_dest] != '\0')
		len_dest++; /* increment the length */

	while (src[len_src] != '\0')
		len_src++;

	if (n >= len_src)
	{
		/* reassigns n to length of src */
		/* if n is greater than length of src */
		n = len_src;
	}
	while (i <= n - 1)
	{
		/**
		 * overite the last value of dest
		 * increment its length by i and assign
		 * it the value of ith character
		 */
		dest[len_dest + i] = src[i];

		i++;
	}

	return (dest);
}
