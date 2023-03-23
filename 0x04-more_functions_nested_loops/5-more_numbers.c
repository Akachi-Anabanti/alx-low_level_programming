#include "main.h"

/**
 * more_numbers - repeatedly print a range of numbers 0-14
 */
void more_numbers(void)
{
	int i, j;

	j = 0;

	do {
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}

		_putchar('\n');

		j++;

	} while (j < 10);
}
