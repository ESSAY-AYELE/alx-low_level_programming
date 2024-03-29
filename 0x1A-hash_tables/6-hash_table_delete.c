#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	hash_node_t *node = NULL;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			tmp = node->next;
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
