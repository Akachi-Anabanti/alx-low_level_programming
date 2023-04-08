#include "main.h"
#include <stdlib.h>

/**
 * main - adds postive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
