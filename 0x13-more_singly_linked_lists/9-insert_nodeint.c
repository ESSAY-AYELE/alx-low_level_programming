#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at the given index
 * @head: pointer to the head of the index
 * @idx: index
 * @n: data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx - 1 && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	new->n = n;
	new->next = node->next;
	node->next = new;
	return (new);
}
