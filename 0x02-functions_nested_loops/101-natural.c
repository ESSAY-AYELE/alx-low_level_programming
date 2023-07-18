#include <stdio.h>
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
	}
	return (0);
}
