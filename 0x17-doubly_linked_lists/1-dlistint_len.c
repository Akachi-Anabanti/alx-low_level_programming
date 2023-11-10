#include "lists.h"

/**
 * dlistint_len - A function that prints all the element of a lis
 * @h: Head of node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *nextnode;
	size_t count = 0;

	if (h == NULL)
		return (0);
	nextnode = malloc(sizeof(dlistint_t));

	nextnode->next = h->next;
	nextnode->n = h->n;
	nextnode->prev = h->prev;

	while (nextnode != NULL)
	{
		count++;
		nextnode = nextnode->next;
	}
	return (count);
}
