#include "main.h"
/**
 * *leet - leet cryptography
 * @s: the string tho transform
 * Return: transformed string
 */
char *leet(char *s)
{
	char *str  = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		else if (*s == 'e' || *s == 'E')
			*s = '3';
		else if (*s == 'l'  || *s == 'L')
			*s = '1';
		else if (*s == 't' || *s == 'T')
			*s = '7';
		else if (*s == 'o' || *s == 'O')
			*s = '0';
		s++;
	}
	return (str);
}
