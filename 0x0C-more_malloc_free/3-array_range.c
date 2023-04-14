#include "main.h"

/**
 * array_range - creates array of integers
 * @min: The minimum number
 * @max: The maximum number
 * Return: The pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	diff  = max - min;
	diff = diff + 1; /*To include the edge numbers*/

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= diff && min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
