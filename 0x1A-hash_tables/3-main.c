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
	char *s = "hetairas";
	unsigned long int index;
	char *name = "mentioner";
    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");


    hash_table_set(ht, "mentioner", "not cool");

    index = key_index((unsigned char *)s, ht->size);
    
    printf("key: %s, value: %s\n", ht->array[index]->key, ht->array[index]->value);

    index = key_index((unsigned char *)name, ht->size);
    
    printf("key: %s, value: %s\n", ht->array[index]->next->key, ht->array[index]->next->value);
    return (EXIT_SUCCESS);
}
