#include "main.h"
/**
* print_sign - take an integer and print its sing
*
* Return: 1 when n is +ve,0 when n= 0,-1 when n is-ve.
*/
int print_sign(int n)
{
  if(n>0)
  {
    _putchar('+');
    return (1);
  }
  else if(n == 0)
  {
     _putchar('0');
     return (0);
  }
  else
  {
    _putchar('-');
    return (-1);
  }
    
