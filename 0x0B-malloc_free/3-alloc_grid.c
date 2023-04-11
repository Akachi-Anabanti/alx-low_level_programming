#include "main.h"

/**
 * alloc_grid - allocate memory for 2D array
 * @width: width of the array
 * @height: Height of the array
 * Return: a pointer to the memory
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **arg;

	if (width <= 0 || height <= 0)
		return (NULL);

	arg = malloc(sizeof(int) * (width + 1));

	if (arg == NULL)
	{
		return (NULL);
	}

	for (; i < width; i++)
	{
		arg[i] = malloc(sizeof(int *) * (height + 1));

		if (arg[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0;  j < height; j++)
			arg[i][j] = 0;
	}
	return (arg);
}
