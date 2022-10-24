#include <string.h>
/**
 * rev_string - reverse a string
 *
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i, temp, len;
	
	len = strlen(s);
	for (i = 0; i > len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
	}
}
