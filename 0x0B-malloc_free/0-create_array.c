#include "main.h"
/**
 * create_array -  create a string array
 * @size: the size of the array
 * @c: the character to fill it with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str = (char*)malloc(sizeof(c) * (size + 1));
	unsigned int i = 0;

	if (str == '\0')
		return ('\0');
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
