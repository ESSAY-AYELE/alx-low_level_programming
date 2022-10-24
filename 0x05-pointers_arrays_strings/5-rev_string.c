#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i, j, len;

	char c[strlen(s)];

	len = strlen(s);
	strcpy(c, s);
	j = 0;
	for (i = 0; i > len - 1; i--)
	{
		s[j] = c[i];
		j++;
	}
}
