#include "main.h"
void times_table(void)
{
   int j, i, f, s, p;
   
   for (i = 0; i < 10; i++)
   {
    for(j = 0; j < 10; j++)
    {
       if (j==0)
          _putchar('0');
          
      p=i*j;
      else if (p < 10){
       _putchar(',');
      _putchar(' ');
      _putchar(' ');  
      _putchar('0' + p);      
      }
      else
      {
        f = (p - (p % 10))/10;
        s = (p%10);
         _putchar(',');
        _putchar(' ');
        _putchar('0' + f);
        _putchar('0' + s);
         
        }
        
        }
        _putchar('\n');
        }
        }
        
         
