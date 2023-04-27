#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node to the begining of a linked list
 * @head: head
 * @str: The string
 * Return: Address to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newnode;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = malloc(sizeof(char) * (len + 1));

	if (newnode->str ==  NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	if (head == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (newnode);
}
