#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the element of a linked list
 * @h: pointer to the head of the element
 * Return: the number of numbers
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp, *nextnode;
	size_t number = 0;

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (1);
	}
	temp = h;
	while (temp)
	{
		nextnode = temp->next;
		printf("%d\n", temp->n);
		temp = nextnode;
		number++;
	}
	return (number);


}
