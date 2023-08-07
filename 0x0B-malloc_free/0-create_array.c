#include "main.h"
/**
 * create_array -  create a string array
 * @size: size of the array
 * @c: the character to fill it with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char str[] = malloc(sizeof(c) * size);
	unsigned int i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
