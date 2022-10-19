#include "main.h"

void print_times_table(int n)
{
        int j, i, f, s, t, p;

        for (i = 0; i < n; i++)
        {
                for(j = 0; j < n; j++)
                {
                p=i*j;
                if (j==0)
                        _putchar('0');
                else if (p < 10)
                {
                      _putchar(',');
                      _putchar(' ');
                      _putchar(' ');
                      _putchar(' ');  
                      _putchar('0' + p);      
                 }
                 else if (p > 99)
                 { 
                          t = p % 10;
                            s = ((p % 100) - t) / 10; 
                          f = (p - s - t) / 100;
                          _putchar(',');
                          _putchar(' ');
                          _putchar('0' + f);
                          _putchar('0' + s);
                          _putchar('0' + t);
                   }   
                else
                {
                f = (p - (p % 10))/10;
                s = (p%10);
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + f);
                _putchar('0' + s);

                }

                }
                _putchar('\n');
        }         
}
