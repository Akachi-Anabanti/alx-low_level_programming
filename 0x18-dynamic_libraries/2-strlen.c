#include "main.h"
#include <stdio.h>

/**
 * _strlen - determines the length of a string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}
	return (sum);
}
