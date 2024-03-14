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
	size_t low = 0, high = 0, index = 0;
	size_t jump_val = sqrt(size);

	if (array == NULL)
		return (-1);
	while (high <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		high = low + jump_val;

		if (value <= array[high] && value >= array[low])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (index = low; index <= high; index++)
			{
				printf("Value checked array[%ld] = [%d]\n", index, array[index]);
				if (value == array[index])
					return (index);
			}
		}
		else if (high > size)
			break;
		else if (value > array[low] && value > array[high])
		{
			low = high;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (index = low; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
	}
	return (-1);
}
