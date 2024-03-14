#include "search_algos.h"

/**
 * interpolation_search - A function that searches for
 * a value in a sorted array of integers using the
 * interpolation search algorithm
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: the index of value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	/**
	 * pos = low +  value -arr[low]
	 *              ----------------  X (high - low)
	 *              arr[high] - arr[low]
	 */
	size_t low, high, pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
