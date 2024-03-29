#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp =  head->next;
		free(head);
		head = temp;
	}
}
