#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        -1,0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,15, 16, 40, 50
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 9, jump_search(array, size, 9));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 39));
    return (EXIT_SUCCESS);
}
