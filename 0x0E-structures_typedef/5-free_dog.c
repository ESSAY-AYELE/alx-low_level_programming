#include "dog.h"

/**
 * free - free memory hold by d
 * @d: pointer for dog_t data
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
