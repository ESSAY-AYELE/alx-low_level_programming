#include "main.h"
void print_to_98(int n)
{
  if (n > 98)
   greater(n);
  else if (n > 0 && n < 98)
    less(n);
  else
    negative(n);
}
void greater(int n){
  int i;
  for (i = n; i > 97; i--){
    _putchar('0' + i);
    if (i!=98){
    _putchar(',');
    }_putchar(' ');
    

  
