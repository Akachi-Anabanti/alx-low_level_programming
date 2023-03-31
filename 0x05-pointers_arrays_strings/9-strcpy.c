#include "main.h"

/**
 * *_strcpy - copies a string from src to dest
 * @src: the source
 * @dest: the dest
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];

		i++;
	}

	dest[i] = '\0';

	return (dest);
}
