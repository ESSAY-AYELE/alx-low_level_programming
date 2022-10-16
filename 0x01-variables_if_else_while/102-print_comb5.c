#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char f, s,t ,l;

	for (f = '0'; f < '9'+1 ; f++)
    {
        for (s = '0'; s < '9'+1 ; s++)
        {
            for (t = f; t < '9'+1 ; t++)
            {

                for (l = s + 1; l < '9'+1 ; l++)
                {
                    putchar(f);
                    putchar(s);
                    putchar(' ');
                    putchar(t);
                    putchar(l);
                    putchar(',');
                    putchar(' ');

                }
            }

            }

        }
	putchar('\n');
	return (0);
}
