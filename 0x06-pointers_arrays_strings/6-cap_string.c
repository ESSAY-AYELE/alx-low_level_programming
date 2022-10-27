#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes string
 * @str: the string
 * Return: the result
 */
char *cap_string(char *str)
{
	int i, len, j, len2;
	char c[] =" .,{}()!?;\t\n\"";

	len = strlen(str);
	len2 = strlen(c);
	str[0] = toupper(str[0]);
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (str[i] == c[j])
				str[i + 1] = toupper(str[i + 1]);
		}
	}
	return (str);
}
