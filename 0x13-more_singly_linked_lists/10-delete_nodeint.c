#include "lists.h"

/**
 * delete _nodeint_at_index - deletes node at the given index
 * @head: the head of the list
 * @index: the index
 * Return: 1 if succed else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *temp;

	if (index == 0 && node != NULL)
	{
		*head = node->next;
		if (node != NULL)
			free(node);
		return(1);
	}
	while (i < index - 1 && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);
	temp = node->next->next;
	free(node->next);
	node->next = temp;
	return (1);
}
