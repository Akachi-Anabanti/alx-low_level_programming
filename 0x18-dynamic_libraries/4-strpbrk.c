#include "main.h"

/**
 * _strpbrk - finds the first occurence in
 * string s from string accept
 * @s: the string to check
 * @accept: the source of character
 * Return: Pointer to the byte in s that matahced one of the bytes in accept
 * or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return ('\0');
}
