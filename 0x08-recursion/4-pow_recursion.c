#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: the first int
 * @y: the second int
 * Return: interger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
