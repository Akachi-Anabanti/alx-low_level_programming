#include "main.h"
/**
 * *leet - leet cryptography
 * @s: the string tho transform
 * Return: transformed string
 */
char *leet(char *s)
{
	int i;

	char alph[] = {"aAeEtToOlL"};
	char num[] = {"4433770011"};

	while (*s != '\0')
	{
		for (i = 0; alph[i]; i++)
		{
			if (*s == alph[i])
				*s = num[i];

		}
		s++;
	}
	return (s);
}
