#include "hash_tables.h"

/**
 * hash_table_set - add new item to the hash table
 * @ht: the hash table
 * @key: the key for the data
 * @value: the value assocated with the key
 * Return: 1 if succes else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = create_item(key, value);
		if (new == NULL || new->key == NULL || new->value == NULL)
			return (0);
		ht->array[index] = new;
	}
	else
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				strcpy(node->value, value);
				break;
			}
			node = node->next;
		}
		if (node == NULL)
		{
			new = create_item(key, value);
			if (new == NULL || new->key == NULL || new->value == NULL)
				return (0);
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}

/**
 * create_item - create new item of the hasht table
 * @key: for the value
 * @value: the value
 * Return: pointer to the new item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	return (new);
}
