#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: head of list
 * @idx: the index
 * @n: the data
 * Return: he address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = NULL;
	unsigned int num = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h,n);
		return (new);
	}
	else
	{
		if (tmp != NULL)
		{
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		}
		while (tmp != NULL)
		{
			if (idx == num)
			{
				if (tmp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					new->n = n;
					new->next = tmp;
					new->prev = tmp->prev;
					tmp->prev = new;
					new->prev->next = new;
				}
			}
			num++;
			tmp = tmp->next;
		}
	}
	return (new);
}
