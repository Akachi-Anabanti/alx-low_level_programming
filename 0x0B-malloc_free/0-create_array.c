#include "main.h"

/**
 * create_array - Creates array of chars,a nd initi
 * lize with specific char
 * @size: size of the array.
 * @c: specific char
 * Return: pointer to arr or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
