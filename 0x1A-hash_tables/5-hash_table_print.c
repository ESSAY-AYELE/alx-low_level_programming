#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i, f = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (i == 0)
			printf("{");
		while (node != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node != NULL)
			{
				printf(", ");
				f = 0;
			}
			else
				f = 1;
		}
		if (i == ht->size - 1)
			printf("}\n");
	}
}
