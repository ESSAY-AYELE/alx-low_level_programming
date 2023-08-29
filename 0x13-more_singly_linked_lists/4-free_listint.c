#include "lists.h"

/**
 * free_listint - free the list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *t;

	while (temp != NULL)
	{
		t = temp->next;
		free(temp);
		temp = t;
	}
}
