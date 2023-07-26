#include "main.h"
/**
 * _strcmp - compares the length of 2 string
 * @s1: the first stirng pointer
 * @s2: the second string pointer
 * Return: +ve int if s2 < s1 else -ve int 0,if they are equll
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	return (0);
}
