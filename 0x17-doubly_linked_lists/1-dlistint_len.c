#include "lists.h"

/**
 * dlistint_len - count the number of node
 * @h: the head of list
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
