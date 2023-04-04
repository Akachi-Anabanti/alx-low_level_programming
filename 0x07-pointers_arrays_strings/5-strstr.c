#include "main.h"
/**
 * _strstr - returns numbr of bytes in the initial segment
 * of haystack which consist only o bytes from accept
 * @haystack: the string to be searched
 * @needle: the string to find
 * Return: pointer to the beginning of the located string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *ptr;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				ptr = &haystack[j];
				return (ptr);
			}
		}
	}
	return ('\0');
}