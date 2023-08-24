#include "lists.h"
/**
 * free_list - free singly linked list
 * @head: pointer to the head of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
