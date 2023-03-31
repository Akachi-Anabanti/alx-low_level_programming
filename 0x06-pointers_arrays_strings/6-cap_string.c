#include "main.h"

/**
 * *cap_string - Toggle case
 * @s: the string to toggle
 * Return: character array of toggled letters
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			switch (s[i - 1])
			{
				case ' ':
					s[i] = s[i] - 32;
					break;
				case '\t':
					s[i] = s[i] - 32;
					break;
				case '\n':
					s[i] = s[i] - 32;
					break;
				case ',':
					s[i] = s[i] - 32;
					break;
				case ';':
					s[i] = s[i] - 32;
					break;
				case '.':
					s[i] = s[i] - 32;
					break;
				case '!':
					s[i] = s[i] - 32;
					break;
				case '?':
					s[i] = s[i] - 32;
					break;
				case '"':
					s[i] = s[i] - 32;
					break;
				case '(':
					s[i] = s[i] - 32;
					break;
				case ')':
					s[i] = s[i] - 32;
					break;
				case '{':
					s[i] = s[i] - 32;
					break;
				case '}':
					s[i] = s[i] - 32;
					break;
			}
		}
		i++;
	}
	return (s);
}
