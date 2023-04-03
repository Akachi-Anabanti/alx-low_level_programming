#include "main.h"
/**
 * *_strchr - finds the first occurence of c in s
 * @s: string to search
 * @c: character to find
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	if  (*s == '\0' && *s != c)
		return ('\0');
	else if (*s == c)
		return (s);
	return (_strchr(s + 1, c));
}
