#include "hash_tables.h"

/**
 * hash_table_get - get the value from hash table
 * @ht: pointer for the hash table
 * @key: key associted with the value
 * Return: the value else NULL IF NOT found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}
	return ((node == NULL) ? NULL : node->value);
}
