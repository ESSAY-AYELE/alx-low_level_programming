#include "main.h"
void print_to_98(int n)
{
  if (n >= 98)
   greater(n);
  else if (n > 0 && n < 98)
    less(n);
  else
    negative(n);
}
void greater(int n)
{
  int i, f, s, t;
  
  for (i = n; i > 97; i--)
  {
    if (i < 100)
    {
      s = i % 10;
      f = (i-s)/10;
      
      _putchar('0' + f);
      _putchar('0' + s);
      if (i!=98)
      {
     _putchar(',');
     _putchar(' ');
      }
    }
      else
      {
        t = i % 10;
       s = (i-t)/10;
        f = (i-s-t)/10;
        _putchar('0' + f);
      _putchar('0' + s);
       _putchar('0' + t);
     
        
      }
      
    }
}
    
    void less(int n)
    {
      int i, f, s;
      
      for (i=n; i < 99;i++)
      {   
        if (i >= 10)
        {
          s = i % 10;
         f = (i - s)/10;
         _putchar('0' + f);
      _putchar('0' + s);
      if (i!=98)
      {
     _putchar(',');
     _putchar(' ');
      }
      }
        else
          _putchar('0' + i);
      }
    }
  
void negative(int n)
{
  int i, f, s;
  
 for (i = n; i < 1 ; i++)
 {
    if (i <= -10)
    {
      f = (i-(i%10)) / 10;
      s = i % 10;
      _putchar ('-');
      _putchar('0' - f);
      _putchar('0' - s);
      _putchar(',');
     _putchar(' ');
    }
   else
   {
     _putchar('-');
     _putchar('0'-i);
   }
 }
      less(0);
}
     
       
        
 
    

  
