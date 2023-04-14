#include "main.h"

/**
 * string_nconcat - concatenate n characters from s2 to s1
 * @s1: base string
 * @s2: source string
 * @n: number of characters
 * Return: pointer to new concatenated string
 */
char *string_nconcat(char *s1, char  *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0, i;
	char *str;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	str = malloc(sizeof(char) * (len_s1 + n + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len_s1 + i] = s2[i];
	str[len_s1 + n] = '\0';
	return (str);

}
