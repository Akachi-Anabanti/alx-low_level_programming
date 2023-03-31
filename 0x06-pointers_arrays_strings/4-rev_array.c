#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i]; /*set a temporary value */

		a[i] = a[n - 1 - i]; /* switch values */

		a[n - 1 - i] = temp;
	}
}
