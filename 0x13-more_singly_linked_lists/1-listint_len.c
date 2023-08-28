#include "lists.h"
/**
 * listint_len - computes the number of elemets of listint_t
 * @h: pointer to listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

