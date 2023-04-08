#include "main.h"
#include <stdlib.h>

/**
 * main - multiples to numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int result, x , y;
	if (argc == 3)
	{
		x =  atoi(argv[1]);

		y = atoi(argv[2]);

		result = x * y;

		printf("%d\n", result);

		return (0);
	}
	printf("Error\n");
	return (1);
}
