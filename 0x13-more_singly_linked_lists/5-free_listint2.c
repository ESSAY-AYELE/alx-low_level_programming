#include "lists.h"

/**
 * free_listint2 - free the listint_t
 * @head: pointer to the pointer of the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *t;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			t = temp->next;
			free(temp);
			temp = t;
		}
		*head = NULL;
	}
}
