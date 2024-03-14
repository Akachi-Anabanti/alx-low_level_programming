#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in
 * a sorted array of integers using the Binary search algo
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to find
 *
 * Return: The index where the value is found
 * or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, mid, i;
	size_t N_size = size - 1;

	if (array == NULL)
		return (-1);
	while (index <= N_size)
	{
		mid = (index + N_size) / 2;

		printf("Searching in array: ");
		for (i = index; i < N_size; i++)
			printf("%d, ", array[i]);
		printf("%d", array[i]);
		printf("\n");

		if (array[mid] < value)
			index = mid + 1;
		else if (array[mid] > value)
			N_size = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
