#include "lists.h"

/**
 * add_nodeint - adds a newnode at the begining
 * @head: The pointer to the head
 * @n: the value of the element
 * Return: pointer to the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n =  n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);

}
