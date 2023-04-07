#include "main.h"

int prime_tester(int n, int x);
/**
 * is_prime_number - checks if an input is prime
 * @n: input
 * Return: 1 if prime o if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_tester(n, n - 1));
}

/**
 * prime_tester - tests if a number is prime
 * by finding the modulo of all the numbers below it
 * @n: the number to determine
 * @x: the initial value
 * Return: 1 if n is prime otherwise 0
 */
int prime_tester(int n, int x)
{
	if (x == 1)
		return (1);
	else if (n % x == 0 && x < n && x != 1)
		return (0);
	return (prime_tester(n, x - 1));
}
