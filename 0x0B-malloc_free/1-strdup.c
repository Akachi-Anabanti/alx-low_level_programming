#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory which contains a copy of the string
 * given as parameter
 * @str:The given string
 * Return: A pointer to memory or NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (; len > 0; len--)
		ptr[len - 1] = str[len - 1];

	return (ptr);
}
