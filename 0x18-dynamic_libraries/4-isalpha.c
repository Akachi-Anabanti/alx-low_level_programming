#include "main.h"

/**
 * _isalpha - checks for alphabets lower or uppercase
 * @c: The input to check
 *
 * Return: 1 if c is alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
