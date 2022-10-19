#include "_putchar.h"
#include "1-main.h"
/**
 * print_alphabet - print alphabet
 *
 * Return: Always void.
 */
void print_alphabet(void)
{
  char i;
  
  for (i= 97; i < 123; i++)
    _putchar(i);
  _putchar('\n');
}
