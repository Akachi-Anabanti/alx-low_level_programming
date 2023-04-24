#include "variadic_functions.h"

/**
 * sum_them_all - sums all it's parameter
 * @n:the number of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n, i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);

	return (sum);
}
