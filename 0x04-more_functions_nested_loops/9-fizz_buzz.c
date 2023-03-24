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
			printf(" ");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
