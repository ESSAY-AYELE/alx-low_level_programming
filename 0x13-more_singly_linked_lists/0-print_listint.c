#include "lists.h"
/**
 * print_listint - prints the elemets of listint_t
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}

