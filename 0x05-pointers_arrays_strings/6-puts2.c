#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 */
void puts2(char *str)
{
	int lng = 0;
	int t = 0;
	char *j = str;
	int i;

	while (*j != '\0')
	{
		j++;
		lng++;
	}
	t = lng - 1;
	for (i = 0; i <= t; i++)
	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
