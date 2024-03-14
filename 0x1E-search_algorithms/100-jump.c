#include "search_algos.h"
#include <math.h>

/**
 * jump_search - a function that searches for a vlaue in
 * sorted array if integers using Jump search
 * @array: Array to be searched
 * @size: size of the array
 * @value: The value to be found
 * Return: The index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, index = 0;
	size_t jump_val = sqrt(size);
	size_t high = jump_val;

	if (array == NULL)
		return (-1);
	while (low < size)
	{
		printf("Value checked[%ld] = [%d]\n", low, array[low]);
		if (high >= size || array[high] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			break;
		}
		low = high;
		high += jump_val;
	}
	for (index = low; index <= high && index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
