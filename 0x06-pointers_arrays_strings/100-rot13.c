#include "main.h"

/**
 * rot13- ROT13 algorithm rotates an alphabet 13 places
 * @s: string to transform
 * Return: The transformed string
 */
char *rot13(char *s)
{
	char *str = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = ((*s - 'a') + 13) % 26 + 'a';
		else if (*s >= 'A' && *s <= 'Z')
			*s = ((*s - 'A') + 13) % 26 + 'A';
		s++;
	}
	return (str);
}
