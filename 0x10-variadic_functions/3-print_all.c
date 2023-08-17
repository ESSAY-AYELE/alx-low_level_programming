#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print float, int, char and string
 * @format: like printf
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
