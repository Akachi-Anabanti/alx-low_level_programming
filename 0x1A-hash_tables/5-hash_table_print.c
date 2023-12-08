#include "hash_tables.h"

/**
 * hash_table_print - Prints the content of a hash
 * table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s':'%s'", node->key, node->value);
				node = node->next;
				if (node == NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
