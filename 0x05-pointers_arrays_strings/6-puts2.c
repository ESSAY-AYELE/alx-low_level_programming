#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints half string
 * @str: the string
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++ ++)
		printf("%c", str[i]);
}

