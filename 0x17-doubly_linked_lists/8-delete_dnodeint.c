#include "lists.h"

/**
 * delete_dnodeint_at_index - delet node at a given index
 * @head: head of the list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *tmp = *head;

	while (*head != NULL && tmp->prev != NULL)
		tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (num == index)
		{
			if (tmp->prev != NULL && tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
				tmp->prev->next = tmp->next;
			}
			else if (tmp->prev == NULL && tmp->next == NULL)
			{
				*head = NULL;
			}
			else if (tmp->prev == NULL)
			{
				tmp->next->prev = NULL;
				*head = tmp->next;
			}
			else if (tmp->next == NULL)
			{
				tmp->prev->next = NULL;
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		num++;
	}
	return (-1);
}
