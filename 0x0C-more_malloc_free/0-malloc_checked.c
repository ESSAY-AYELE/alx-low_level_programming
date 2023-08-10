#include "main.h"
/**
 * malloc_checked -  that allocates memory
 * @b: it is the size of the location
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
