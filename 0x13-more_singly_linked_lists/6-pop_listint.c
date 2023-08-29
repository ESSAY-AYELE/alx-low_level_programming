#include "lists.h"

/**
 * pop_listint - pops the node from the head of the list
 * @head: the head of the list
 * Return: the data of the node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
