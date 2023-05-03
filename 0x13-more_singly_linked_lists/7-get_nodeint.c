#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head node
 * @index: index of the nth node;
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len =  0;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL && index == 0)
		return (head);
	if (head->next == NULL && index > 0)
		return (NULL);

	temp = head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (index > len)
		return (NULL);
	len = 0;
	temp = head;
	while (len < index)
	{
		temp = temp->next;
		len++;
	}
	return (temp);
}
