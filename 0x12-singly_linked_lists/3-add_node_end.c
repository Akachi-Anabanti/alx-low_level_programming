#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a node at the end of the node
 * @head: pointer to pointer to head of linked list
 * @str: The string
 * Return: Address to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *newnode, *temp;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = malloc(sizeof(char) * (len + 1));
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = strdup(str), newnode->len = len;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
