#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a linked list
 * @head: pointer to head node of the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp, *nextnode;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (head->n);

	temp = head;

	while (temp)
	{
		nextnode = temp->next;
		sum += temp->n;
		temp = nextnode;
	}

	return (sum);
}
