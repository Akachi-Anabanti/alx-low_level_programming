#include "main.h"

/**
 * rot13- ROT13 algorithm rotates an alphabet 13 places
 * @s: string to transform
 * Return: The transformed string
 */
char *rot13(char *s)
{
	int j;
	int i;
	char alphas[] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ"};
	char rot[] = {"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM"};
	char *str = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphas[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
