#include "main.h"
/**
 * _strdup - copy a string to new location
 * @str: pointer to a string
 * Return: pointer of the new string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc((len + 1) * sizeof(char));
	while (str[i]&& s == NULL)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
