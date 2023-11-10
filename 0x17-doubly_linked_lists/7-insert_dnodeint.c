#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a give position
 * @h: pointer to head
 * @idx: the index
 * @n: the node value
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *h;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		count++;
		if (count == idx)
			break;
		temp = temp->next;
	}
	if (temp == NULL && count < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
