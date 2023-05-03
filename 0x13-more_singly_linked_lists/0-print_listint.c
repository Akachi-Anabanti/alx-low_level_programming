#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the element of a linked list
 * @h: pointer to the head of the element
 * Return: the number of numbers
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp, *nxt;
	size_t number = 0;

	if (h == NULL)
		return (0);
	if (h->n && h->next == NULL)
	{
		printf("%i\n", h->n);
		return (1);
	}
	tmp = h;
	while (tmp)
	{
		nxt = tmp->next;
		printf("%i\n", tmp->n);
		tmp = nxt;
		number++;
	}
	return (number);


}
