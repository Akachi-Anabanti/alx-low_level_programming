#include "search_algos.h"

/**
 * linear_search - A function that searches for
 * a value in an array of integers
 * @array:The array to search
 * @size: Size of the array
 * @value: The value to find
 * Return: The first index where the value is located
 * else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
