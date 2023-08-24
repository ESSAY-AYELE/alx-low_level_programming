#include "lists.h"

/**
 * list_len - computes the number of elements of list_t
 * @h: pointer to the head of the linked list
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	list_t *temp = (list_t *)h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
