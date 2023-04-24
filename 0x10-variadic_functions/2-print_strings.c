#include "variadic_functions.h"

/**
 * print_strings - print strings follwed by a new line
 * @seperator: string of seperators
 * @n: number of args
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list string_list;

	va_start(string_list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(string_list, char*);
		if (s == NULL)
			s = "(nil)";
		if (seperator != NULL && (i < n - 1))
		{
			printf("%s%s", s, seperator);
		}
		else
		{
			printf("%s", s);
		}
	}
	putchar('\n');
}
