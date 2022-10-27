#include <string.h>
/**
 * leet - change string to leet
 * @str: the string
 * Return: the result
 */
char *leet(char *str)
{
	int i, j, len;
	char lower[] = ['a','e','l','o','s'];
	char upper[] = ['A','E','L','O','S'];
	char leet[] = ['4','3','1','0','7'];

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = leet [j];
	}
	return (str);
}
