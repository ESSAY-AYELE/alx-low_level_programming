#include "lists.h"

/**
 * get_dnodeint_at_index - find a node at given index
 * @head: the head of the list
 * @index: the index
 * Return: the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int n = 0;

	while (tmp != NULL)
	{
		if (n == index)
			return (tmp);
		tmp = tmp->next;
		n++;
	}
	return (NULL);
}
