#include "lists.h"
/**
 * free_listint - frees a nodelist
 * @head: pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *nextnode;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	else
	{
		tmp = head;

		while (tmp)
		{
			nextnode = tmp->next;
			free(tmp);
			tmp = nextnode;
		}
	}
}
