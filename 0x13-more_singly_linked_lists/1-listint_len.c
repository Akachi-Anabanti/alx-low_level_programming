#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of linked list
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t node = 0;

	if (h->next == NULL)
		return (1);
	temp = h;
	while (temp)
	{
		node++;
		temp = temp->next;
	}
	return (node);
}
