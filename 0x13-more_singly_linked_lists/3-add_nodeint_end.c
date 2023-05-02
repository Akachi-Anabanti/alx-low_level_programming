#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head
 * @n: the value
 * Return: Pointer to newnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextnode, *tmp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	nextnode = malloc(sizeof(listint_t));
	if (nextnode == NULL)
		return (NULL);
	nextnode->n = n;
	nextnode->next = NULL;
	if ((*head)->next == NULL)
	{
		(*head)->next = nextnode;
		return (nextnode);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next  = nextnode;
	}
	return (nextnode);
}
