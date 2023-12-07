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

	hash_node_t *new_node;
	unsigned long int i, index;
	char *value_cpy;

	if (key == NULL || *key == '\0')
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	index = key_index((const unsigned char *)key,
			(unsigned long int)ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
