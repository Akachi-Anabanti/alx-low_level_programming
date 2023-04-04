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

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j] j++)
		{
			break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
