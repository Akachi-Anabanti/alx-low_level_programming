#include "main.h"

/**
 * print_rev - reverse a string
 * @s: the string to reverse
 */
void print_rev(char *s)
{
	int ss = 0;
	int i;

	while (*s != '\0')
	{
		ss++;
		s++;
	}
	s--;

	for (i = ss; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
