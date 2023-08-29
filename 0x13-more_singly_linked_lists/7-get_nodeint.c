#include "lists.h"

/**
 * get_nodeint_at_index - give node at requested index
 * @head: pointer to the head of the list
 * @index: the idex of the requested node
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node != NULL)
		return (node);
	return (NULL);
}
