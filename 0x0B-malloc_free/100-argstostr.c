#include "main.h"
/**
 * argstostr - concatenates all the arguments passed to it
 * @ac: number of arguments
 * @av: argument vector
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int j, i = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
