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

	arg = malloc(sizeof(int *) * height);

	if (arg == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		arg[i] = malloc(sizeof(int) * (width + 1));

		if (arg[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0;  j < width; j++)
			arg[i][j] = 0;
	}
	return (arg);
}
