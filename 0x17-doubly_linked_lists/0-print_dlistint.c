#include "lists.h"

/**
 * print_dlistint - print the data of doubly liked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
