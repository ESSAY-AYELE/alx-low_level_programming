#include "main.h"
/**
 * _strspn - search the first character that is not in accept
 * @s: the string to be searched
 * @accept: the set of character to be found
 * Return: the index of the first character that is not in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, found;
	char *pnt;

	len = 0;
	while (*s)
	{
		found = 0;
		pnt = accept;
		while (*pnt)
		{
			if (*pnt == *s)
			{
				found = 1;
				break;
			}
			pnt++;
		}
		if (!found)
			break;
		s++;
		len++;
	}
	return (len);
}
