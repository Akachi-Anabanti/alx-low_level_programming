#include "lists.h"
/**
 * pop_listint - deletes the head node a linked list
 * @head: pointer to head pointer
 * Return: The head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *nextnode;
	int val;

	if (head == NULL || *head == NULL)
		return (0);
	else if ((*head)->next == NULL)
	{
		val = ((*head)->n);
		free(*head);
	}
	else
	{
		nextnode = (*head)->next;
		val = (*head)->n;
		free(*head);
		*head = nextnode;
	}
	return (val);
}
