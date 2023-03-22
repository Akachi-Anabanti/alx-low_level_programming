#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the character to be checked
 *
 * Return: 1 is c is lower otherwise 0
 */
int _islower(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
