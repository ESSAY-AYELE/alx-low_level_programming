#include "main.h"
/**
 * _calloc - is a function to allocate like malloc
 * @nmemb: number of memory block
 * @size: the size of each block
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)p + i) = 0;
	return (p);
}
