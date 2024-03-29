#include "dog.h"

/**
 * print_dog - This function takes a pointer to a
 * struct dog variable d, and prints its members using printf
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
