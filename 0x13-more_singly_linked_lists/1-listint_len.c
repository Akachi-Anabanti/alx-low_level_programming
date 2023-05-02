#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of linked list
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp, *nextnode;
	size_t node = 0;

	if (h == NULL)
		return (0);
	if (h->next == NULL)
		return (1);
	temp = h;
	while (temp)
	{
		nextnode = temp->next;
		temp = nextnode;
		node++;
	}
	return (node);
}
