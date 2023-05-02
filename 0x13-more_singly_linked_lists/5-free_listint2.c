#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: Pointer to pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *nextnode;

	if ((*head) == NULL)
		return;
	if ((*head)->next == NULL)
		free((*head));
	else
	{
		tmp = *head;
		(*head) = NULL;

		while (tmp)
		{
			nextnode = tmp->next;
			free(tmp);
			tmp = nextnode;
		}
	}
}
