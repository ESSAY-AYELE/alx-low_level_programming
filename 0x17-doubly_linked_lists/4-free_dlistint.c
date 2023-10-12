#include "lists.h"

/**
 * free_dlistint - free the memory location occopied by the list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_1 = head, *tmp_2;

	while (tmp_1 != NULL)
	{
		tmp_2 = tmp_1->next;
		free(tmp_1);
		tmp_1 = tmp_2;
	}
}
