#include <stdio>
#include <string.h>
/**
 * puts2 - prints half string
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i + 2)
		printf("%c", str[i]);
}

