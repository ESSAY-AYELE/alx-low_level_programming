#include <stdio.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;
	
	s='0';
	for (f = 48; f < 57 ; f++)
	{
		s=f+1;
		while (s < 57)
		{
			t=s+1;
			while(t<58)
			{
				
            			putchar(f);
            			putchar(s);
            			putchar(t);
            			t++;
            			if(f!=55)
				{
            				putchar(',');
            				putchar(' ');
				}
			}
			s++;
		}
	}
	putchar('\n');
	return (0);
}
