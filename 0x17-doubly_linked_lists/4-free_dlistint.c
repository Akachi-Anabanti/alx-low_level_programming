#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head of the node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next_node;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		next_node =  temp->next;
		free(temp);
		temp = next_node;
	}
}
