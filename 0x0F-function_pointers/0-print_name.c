#include "function_pointers.h"
/**
 * print_name - this is just dum
 * @name: the name to be printed
 * @f: the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f) (*f)(name);
}
