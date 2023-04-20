#ifndef _CALCULATE_
#define _CALCULATE_
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

int (*get_op_func(char *s))(int, int);
/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: The associated function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
