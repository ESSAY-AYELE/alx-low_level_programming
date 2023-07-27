#include "main.h"
/**
 * string_toupper - changes string to upper case
 * @str: pointer to the stirng
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	char d = 'a' - 'A';
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= d;
	}
	return (str);
}
