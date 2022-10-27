#include <string.h>
/**
 * leet - change string to leet
 * @str: the string
 * Return: the result
 */
char *leet(char *str)
{
	int i, j, len;
	char lower[] = "aelot";
	char upper[] = "AELOT";
	char leet[] = "43107";

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
			if (str[i] == lower[j] || str[i] == upper[j])
				str[i] = leet[j];
	}
	return (str);
}
