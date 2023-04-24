#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @seperator: The string to be printed between numbers
 * @n: The number of integers pased to the function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (seperator != NULL && (i < n - 1))
			printf("%d%s", va_arg(numbers, int), seperator);
		else
			printf("%d", va_arg(numbers, int));
	}
	putchar('\n');
}
