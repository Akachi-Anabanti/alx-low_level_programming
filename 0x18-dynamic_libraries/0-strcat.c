#include "main.h"
/**
 * *_strcat -  concatenates two strings
 * @dest: destination string
 * @src: source string [string to be added]
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = 0; /* length of the destination string*/
	int i = 0; /* LCV for src characters */

	while (dest[len_dest] != '\0')
		len_dest++; /* increment the length */

	while (src[i] != '\0')
	{
		/**
		 * overite the last value of dest
		 * increment its length by i and assign
		 * it the value of ith character
		 */
		dest[len_dest + i] = src[i];

		i++;
	}
	dest[len_dest + i] = '\0';

	return (dest);
}
