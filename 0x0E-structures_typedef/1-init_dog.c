#include "dog.h"
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to the dog sturct
 * @name: pointer
 * @age: int
 * @owner: pointer to stirng
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
