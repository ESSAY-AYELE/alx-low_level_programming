#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * ac: argc
 * av: argv
 * Return: pointer to the concatenate str
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0;
	int len = 0;
	char *result;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		i++;
		len++;
	}
	result = malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			result[k] = av[i][j];
			j++;
			k++;
		}
		result[j++] = '\n';
	}
	result[len - 1] = '\0';
	return result;
}
