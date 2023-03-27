#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check its length
 * Return: length
 */
int _strlen(char *s)
{
	int ss = 0; /* set the intial value of the counter */

	while (*s != '\0')
	{
		ss++; /* increment the counter by 1 */
		s++;
	}
	return (0);
}
