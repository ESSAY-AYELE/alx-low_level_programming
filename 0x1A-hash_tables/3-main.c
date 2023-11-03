#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	char *s = "betty";
	unsigned long int index;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    index = key_index((unsigned char *)s, ht->size);
    printf("key: %s, value: %s\n", ht->array[index]->key, ht->array[index]->value);
    return (EXIT_SUCCESS);
}
