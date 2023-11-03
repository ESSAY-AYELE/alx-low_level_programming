#include "hash_tables.h"

/**
 * key_index - generate the index from agiven key
 * @key: the key
 * @size: the size of the table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
