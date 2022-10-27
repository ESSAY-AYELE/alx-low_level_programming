#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalizes string
 * @str: the string
 * Return: the result
 */
char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);
	str[0] = toupper(str[0]);
	for (i = 0; i < len - 1; i++)
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == ';' 
		    || str[i] == '!' || str[i] == '?' || str[i] == '(' || str[i] == ')' || str[i] == '\n' || str[i] == '\t' || str[i] == '{')
			str[i + 1] = toupper(str[i + 1]);
	}
	return (str);
}
