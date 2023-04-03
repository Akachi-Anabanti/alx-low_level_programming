#include "main.h"
#include <stddef.h>
/**
 * *_strchr - finds the first occurence of c in s
 * @s: string to search
 * @c: character to find
 */
char *_strchr(char *s, char c)
{
	while(*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
