#include "main.h"
/**
 * _strstr - search for string in a sting
 * @haystack: the string to searched
 * @needle: the string to be sound
 * Return: heystack begining from the first apperance of needlee
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	int flag = 0;

	while (*p)
	{
		while ((*p == *needle) && (*p != '\0') && (*needle != '\0'))
		{
			p++;
			needle++;
			flag = 1;
		}
		if (flag && *needle == '\0')
		{
			return (haystack);
		}
		else if (flag && *needle != '\0')
			return ('\0');
		haystack++;
		p++;
	}
	return ('\0');
}
