#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - calculates minimum number
 * of coins required to make change
 * usiing the greedy method for a given coin
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on successful execution
 */
int main(int argc, char *argv[])
{
	int i, amount, coins_used = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] != '-')
	{
		for (i = 0; argv[1][i]; i++)
		{
			if (!isdigit(argv[1][i]))
			{
				printf("Error\n");
				return (1);
			}
		}

		amount = atoi(argv[1]);
		for (i = 0; i < 5 && amount > 0; i++)
		{
			while (coins[i] <= amount)
			{
				amount -= coins[i];
				coins_used++;
			}
		}
		printf("%d\n", coins_used);
	}
	else
		printf("%d\n", 0);
	return (0);
}
