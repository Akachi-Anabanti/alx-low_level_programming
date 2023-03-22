#include "main.h"

/**
 * print_alphabet_x10 - Print 10x the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}

		j++;

		_putchar('\n');
	}
}
