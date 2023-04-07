#include "main.h"

int sqrt_estimation(int n, int x);
/**
 * _sqrt_recursion - finds the natural square of a number
 * @n: the number
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_estimation(n, 1));
}

/**
 * sqrt_estimation - estimates the square root of n starting
 * from initial valie x
 * @n: The value to be estimaated
 * @x: The initial value
 * Return: -1 id n has no natural root or x if x is root of n
 */
int sqrt_estimation(int n, int x)
{
	if (x  * x > n)
		return (-1);
	else if (x * x == n)
		return (x);
	return (sqrt_estimation(n, x + 1));
}
