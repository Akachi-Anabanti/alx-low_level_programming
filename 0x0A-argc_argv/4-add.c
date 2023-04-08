#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds postive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success else 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i, j;

	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[i]);

			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + num;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
