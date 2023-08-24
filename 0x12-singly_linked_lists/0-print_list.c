#include "lists.h"

/**
 * print_list - prints the elements of list_t
 * @h: pointer to the head of the linked list
 * Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	list_t *temp = (list_t *)h;

	while (temp->next)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		len++;
		temp = temp->next;
	}
	printf("[%u] %s\n", temp->len, temp->str);
	return (++len);
}
