#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: Head of the node
 * @n: The value at the node
 * Return: address of the new element or NULL if failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
