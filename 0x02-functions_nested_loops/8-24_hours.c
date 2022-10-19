#include "main.h"
void jack_bauer(void)
{
  int hrs,min, f, s, t, l;
  
  for (hrs = 0; hrs < 24;hrs++)
  {
    for(min=0; min<60; min++)
    {
      f = (hrs-(hrs%10))/10;
      s = (hrs%10);
      t = (min-(min%10))/10;
      l = (min%10);
      _putchar('0'+f);
      _putchar('0'+s);
      _putchar(':');
      _putchar('0'+t);
      _putchar('0'+l);
      _putchar('\n');
    }
  }
}
      
      
        
