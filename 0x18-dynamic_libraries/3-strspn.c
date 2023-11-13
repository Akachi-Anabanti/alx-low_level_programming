#include "main.h"
/**
 * _strspn - returns numbr of bytes in the initial segment
 * of s which consist only o bytes from accept
 * @s: the string to be searched
 * @accept: the string to find
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (i);
}
