#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print a list of string
 * @separator: separetor
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *c;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(arg, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
