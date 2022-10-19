#include "main.h"
void times_table(void)
{
   int j, i, f, s, p;
   
   for (i = 0; i < 10; i++)
   {
    for(j = 0; j < 10; j++)
    {
      p=i*j;
      if (p < 10){
      _putchar('0' + p);
      _putchar(',');
      _putchar(' ');
      _putchar(' ');
      }
      else
      {
        f = (p - (p % 10))/10;
        s = (p%10);
        _putchar('0' + f);
        _putchar('0' + s);
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        }
        }
        }
        }
        
         
