#include "main.h"
/**
 * *_strchr - finds the first occurence of c in s
 * @s: string to search
 * @c: character to find
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s
	while (*s != '\0')
	{
		if (*s == c)
			return (ptr);
		s++;
	}
	return ('\0');
}
