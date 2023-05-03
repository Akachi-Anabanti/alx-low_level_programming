#include "lists.h"
/**
 * list_len - returns the length of a linked list
 * @h: pointer to the beginning of the list
 * Return: length of the list
 */
unsigned int list_len(listint_t *h)
{
	listint_t *temp;
	unsigned int len = 0;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}

/**
 * node_at_index - gets the node at index
 * @h: pointer to head
 * @idx: index
 * Return: pointer to the index
 */
listint_t *node_at_index(listint_t *h, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
/**
 * insert_nodeint_at_index - inserts a node at given index
 * @head: pointer to head node
 * @idx: index
 * @n: data value of new node
 * Return: address of the newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len;
	listint_t *temp, *newnode;

	if (*head == NULL || head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if ((*head)->next == NULL || idx == 1)
	{
		(*head)->next = newnode;
		newnode->next = NULL;
	}
	else
	{
		temp = *head;
		len  = list_len(temp);
		if (idx > len)
		{
			free(newnode);
			return (NULL);
		}
		temp = node_at_index(temp, idx);
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
