#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint
 * @head: pointer to the head node
 * @index: The index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;

	if (index == count)
		return (head);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
		if (count == index)
			break;
	}
	return (temp);
}
