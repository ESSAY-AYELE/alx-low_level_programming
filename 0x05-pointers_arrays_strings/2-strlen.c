#include "main.h"
/**
 * _strlen - compute the length of the string
 * @s: the pointer to the stirng
 * Return: the length
 */
int _strlen(char *s)
{	int i;
	char tmp;

	for (i = 0; tmp == '\0'; i++)
		tmp = *(s + i);
	return (i);
}
