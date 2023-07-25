#include "main.h"
/**
 * rev_string - reversers a stirng
 * @s: the string pointer
 */
void rev_string(char *s)
{
	int i, j, k;
	char tmp = 'A';

	for (i = 0; tmp != '\0'; i++)
		tmp = s[i];
	i -= 2;
	k = i / 2;
	for (j = 0; j <= k; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
