#include "3-calc.h"
/**
 * op_add - additon operation
 * @a: first arg
 * @b: second arg
 * Return: sum of and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * opp_sub - SUbtract a and b
 * @a: first arg
 * @b: second arg
 * Return: difference
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/**
 * op_mul - multiply a and b
 * @a: first arg
 * @b: second arg
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}
/**
 * op_div - divide a by b
 * @a: first arg
 * @b: second arg
 * Return: The integer division of a and b
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
 * op_mod - modulo of a and b
 * @a: first arg
 * @b: second arg
 * Return: modulo
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
