#include "lists.h"

/**
 * free_list - frees the memory assigned to a linked list
 * @head: Head of link list
 */
void free_list(list_t *head)
{
	list_t *temp, *nextnode;

	if (head == NULL)
		return;
	else if (head == NULL && head->str != NULL)
		free(head->str);
	temp = head;

	while (temp)
	{
		nextnode = temp->next;
		free(temp->str);
		free(temp);
		temp = nextnode;
	}
}
