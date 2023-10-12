#include "lists.h"

/**
 * insert_dlistint_dnodeint_at_index - insert node at a given index
 * @h: head of list
 * @idx: the index
 * @n: the data
 * Return: he address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int num = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	while (tmp != NULL)
	{
		if (idx == num)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev = new;
			if (new->prev != NULL)
				new->prev->next = new;
			return (NULL);
		}
		num++;
		tmp = tmp->next;
	}
	return (NULL);
}
