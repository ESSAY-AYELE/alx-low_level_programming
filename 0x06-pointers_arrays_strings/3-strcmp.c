#include "main.h"
/**
 * _strcmp - compares the length of 2 string
 * @s1: the first string pointer
 * @s2: the second string pointer
 * Return: +ve int if s2 < s1 else -ve int 0, if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if ((s1[i] == '\0') && (s2 != '\0'))
		return (-1);
	else if ((s1[i] != '\0') && (s2[i] == '\0'))
		return (1);
	return (0);
}
