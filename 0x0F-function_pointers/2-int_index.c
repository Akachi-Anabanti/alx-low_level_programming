#include "function_pointers.h"
/**
 * int_index - returns index of an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !(array) || !cmp)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (i == size && !cmp(array[i]))
			return (-1);
		if (cmp(array[i]))
			break;
	}
	return (i);
}
