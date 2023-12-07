#include "hash_tables.h"

/**
 * hash_table_set - adds and element to the hash table
 * @ht: is the table
 * @key: is the key, key cannot be an empty string
 * @value: is the value associated with the key. Value
 * must be duplicated. Value can be empty string
 * Return: 1 if successful ortherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node, *current_node;
	unsigned long int index = key_index((const unsigned char *)key,
			(unsigned long int)ht->size);

	if (key == NULL || *key == '\0')
		return (0);

	current_node = ht->array[index];

	if (!current_node)
	{
		/*Create the item */
		new_node  = malloc(sizeof(hash_node_t));
		new_node->key = malloc(strlen(key) + 1);
		new_node->value = malloc(strlen(value) + 1);
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
		new_node->next = NULL;
		/*set the index of the item in table array*/
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(current_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		/*Handle collision here*/
		new_node  = malloc(sizeof(hash_node_t));
		new_node->key = malloc(strlen(key) + 1);
		new_node->value = malloc(strlen(value) + 1);
		strcpy(new_node->key, key);
		strcpy(new_node->value, value);
		new_node->next = current_node;
		ht->array[index] = new_node;
	}
	return (1);
}
