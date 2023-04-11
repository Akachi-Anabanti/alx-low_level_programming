#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: A pointer to the concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i;

	char *str;

	if (s1 == NULL)
		s1 = "";

	if(s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
		len_s2++;

	str = malloc(sizeof(char) * (len_s1 + len_s2));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i <= len_s2; i++)
	{
		str[len_s1 + i] = s2[i];
	}

	return (str);
}
