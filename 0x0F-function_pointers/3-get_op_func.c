#include "3-calc.h"
/**
 * get_op_func - returns a pointer to correct function
 * @s: The operator
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0 && ops[i].op != NULL)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
