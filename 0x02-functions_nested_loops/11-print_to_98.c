#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
		return;
	}
	do
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	} while (n != 98);
	printf("\n");
}
		
