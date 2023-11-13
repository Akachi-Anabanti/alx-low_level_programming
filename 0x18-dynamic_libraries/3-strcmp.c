#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 15 if the first none matching character in s1 is
 * greater than its counterpart in ASCII value, -15 if its counter part
 * is greater else 0 if both match exactly
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
			{

				return (15);
			}
			return (-15);
		}
		s1++;
		s2++;
	}
	return (0);
}
