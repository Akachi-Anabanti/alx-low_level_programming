#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key
 * Return: The value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);
	aux = ht->array[index];
	while (aux && strcmp(aux->key, key) != 0)
		aux = aux->next;
	return ((aux == NULL) ? NULL : aux->value);
}
