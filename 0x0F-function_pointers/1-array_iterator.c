#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;
	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
