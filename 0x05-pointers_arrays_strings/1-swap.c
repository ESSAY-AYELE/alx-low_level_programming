#include "main.h"
/**
 * swap_int - sap t 2 integer from their pointers
 * @a: the first pointer
 * @b: the socnd pointer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
