#include "main.h"

/**
 * *cap_string - Toggle case
 * @s: the string to toggle
 * Return: character array of toggled letters
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char delim[13];

	delim[0] = ' ';
	delim[1] = '\t';
	delim[2] = '\n';
	delim[3] = ',';
	delim[4] = ';';
	delim[5] = '.';
	delim[6] = '!';
	delim[7] = '?';
	delim[8] = '"';
	delim[9] = '(';
	delim[10] = ')';
	delim[11] = '{';
	delim[12] = '}';

	while (s[i] != '\0')
	{

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] -  32; /*capitlize first character*/
				continue;
			}
			for (j = 0; j <= 12; j++)
			{
				if (s[i - 1] == delim[j])
					s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
