#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int result;
	int a, b;
	char exp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	exp = *(argv[2]);

	if (
			(exp != '+') &&
			(exp != '-') &&
			(exp != '*') &&
			(exp != '/') &&
			(exp != '%')
			)
	{
		printf("Error\n");
		exit(99);
	}
	if ((exp == '/' || exp == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
