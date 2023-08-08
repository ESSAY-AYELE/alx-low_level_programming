#include "main.h"
/**
 * str_concat - concatniat 2 string
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[len])
		len++;
	while (s2 && s2[i])
	{
		len++;
		i++;
	}
	i = 0;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
		{
			s[j] = s1[i];
			j++;
			i++;
		}
	}
	i = 0;
	while (s2[i])
	{
		s[j] = s2[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}
