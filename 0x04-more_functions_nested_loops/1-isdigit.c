#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: character to be checked
 * Return: 1 is character is digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
