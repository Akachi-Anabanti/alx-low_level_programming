#include "main.h"

/**
 * _calloc - allocates memory for an array for
 * @nmemb: number of elements
 * @size: size of elements in bytes
 * Return: pointer to allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size *  nmemb);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
