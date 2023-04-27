#include "lists.h"

/**
 * list_len - A returns the number of elements in linked list
 * @h: The linked list
 * Return: len of linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp, *nextnode;
	size_t count = 0;

	if (h == NULL)
		return (0);
	else if (h == NULL && h->str != NULL)
		return (1);
	temp = h;
	while (temp)
	{
		nextnode = temp->next;
		temp = nextnode;
		count++;
	}

	return (count);
}
