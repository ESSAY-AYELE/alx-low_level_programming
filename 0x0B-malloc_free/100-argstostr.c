#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * ac: argc
 * av: argv
 * Return: pointer to the concatrenate str
 */
char *argstostr(int ac, char **av)
{
    int i, j;
    int len = 0;
    char *result;

	if (ac == 0 || av == NULL)
        return NULL;
    for (i = 0; i < ac; i++)
        len += strlen(av[i]) + 1;
    result = malloc(len * sizeof(char));
    if (result == NULL)
    {
        return NULL;
    }
    for (i = 0, j = 0; i < ac; i++)
    {
        strcpy(result + j, av[i]);
        j += strlen(av[i]);
        result[j++] = '\n';
    }
    result[len - 1] = '\0';
    return result;
}
