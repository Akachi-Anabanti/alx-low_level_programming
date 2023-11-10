#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data  of linked list
 * @head: pointer to head node
 * Return: The sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
