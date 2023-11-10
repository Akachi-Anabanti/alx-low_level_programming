#include "lists.h"

/**
 * print_dlistint - A function that prints all the element of a lis
 * @h: Head of node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *nextnode;
	size_t count = 0;

	nextnode = malloc(sizeof(dlistint_t));

	nextnode->next = h->next;
	nextnode->n = h->n;
	nextnode->prev = h->prev;

	while (nextnode != NULL)
	{
		count++;
		printf("%i\n", nextnode->n);
		nextnode = nextnode->next;
	}
	return (count);
}
