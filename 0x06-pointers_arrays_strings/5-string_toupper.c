#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change string to uppercase
 * @str: the string
 * Return: the result
 */
char *string_toupper(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}
