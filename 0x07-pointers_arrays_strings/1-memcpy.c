#include "main.h"

/**
 * *_memcpy - copy n bytes of memory from src to dest
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	int i;
	int typd_n = (int)n;

	ptr = dest; /*assign the memory addr of dest to ptr*/

	for (i = 0; i < typd_n; i++)
		dest[i] = src[i];

	return (ptr);
}

