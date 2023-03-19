#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on successful run
 */
int main(void)
{
	int i, j, k, m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (m = k + 1; m <= 57; m++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);

					if (i + j + k + m < 227)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
