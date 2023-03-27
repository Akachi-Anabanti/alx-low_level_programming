#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;

			if (prod <= 9)
			{
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (j != 9)
			{

				_putchar(',');
				_putchar(' ');
				if (prod < 9 && (i *(j+1)) < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
