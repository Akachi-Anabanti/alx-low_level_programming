#include <stdio.h>


/**
 * main - entry point function that prints fizz buzz
 * Return: 0 on successful execution
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i == 0)
			continue;
		else if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
