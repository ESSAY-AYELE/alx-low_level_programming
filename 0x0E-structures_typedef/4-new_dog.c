#include "dog.h"

/**
 * new_dog - create new dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: ownet of the dog
 * Return: the new dog_t data type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL || !(name) || !(owner))
		return (NULL);
	new->name = strdup(name);
	new->age = age;
	new->owner = strdup(owner);
	return (new);
}
