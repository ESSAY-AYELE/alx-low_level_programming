#include "lists.h"
/**
 * add_node_end - add new node to linked list
 * @head: pointer to the head of the list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	size_t len = 0;
	list_t *temp = *head;

	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	if (temp == NULL)
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
