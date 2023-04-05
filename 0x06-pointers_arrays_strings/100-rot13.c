#include "main.h"

/**
 * rot13- ROT13 algorithm rotates an alphabet 13 places
 * @s: string to transform
 * Return: The transformed string
 */
char *rot13(char *s)
{
	int j;
	int i = 0;
	char alphas[] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char *str = s;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphas[j] && (j - 26) >= 0)
				s[i] = alphas[j - 26];
			else if (s[i] == alphas[j] && (j - 26) < 0)
				s[i] = alphas[j + 26];
		}
		i++;
	}
	return (str);
}
