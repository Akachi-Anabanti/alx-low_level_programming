#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: array
 * @size: size of 2D-array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int rdiag_sum = 0; /* right diagonal */
	int ldiag_sum = 0; /* left diagonal */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j == size)
				ldiag_sum = ldiag_sum + a[i][j];
			if (i == j)
				rdiag_sum = rdiag_sum + a[i][j];
		}
	}
	printf("%d, %d\n", rdiag_sum, ldiag_sum);
}
