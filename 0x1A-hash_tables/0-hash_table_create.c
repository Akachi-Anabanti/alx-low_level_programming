#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: The size of the hash table
 * Return: Returns a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		free(table->array);
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
