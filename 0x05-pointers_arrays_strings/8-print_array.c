#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements from an array
 * seperated by comma, follwed by space
 * @a: the array
 * @n: the number of items to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
