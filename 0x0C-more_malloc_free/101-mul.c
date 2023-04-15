#include "main.h"

/**
 * _isdigit - checks if an string is digit
 * @s: The string to check
 * Return: 1 if digit else 0
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _atoi - converts a positive integer string to integer type
 * @s: string to convert
 * Return: Integer
 */
int _atoi(char *s)
{
	int i, n, len, digit;

	i = 0, n = 0, len = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			n = n * 10 + digit;
		}
		i++;
	}
	return (n);
}

/**
 * _print - prints character of a string to stdout
 * @s: string to be printed
 */
void _print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_number - prints an integer to stdout
 * @n: The integer to be printed
 */
void print_number(long int n)
{
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * main - entry point, multiplies two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	long int product;

	if (argc != 3)
	{
		_print("Error");
		exit(98);
	}

	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{

		_print("Error");

		exit(98);
	}

	if (_atoi(argv[1]) == 0 || _atoi(argv[2]) == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	product = _atoi(argv[1]) * _atoi(argv[2]);

	if (product == 0)
	{
		_putchar('0');
	}
	else if (product > 0 && product <= 9)
	{
		_putchar(product + '0');
	}
	else
		print_number(product);

	_putchar('\n');

	return (0);
}
