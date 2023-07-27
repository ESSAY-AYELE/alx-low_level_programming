#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer to the array
 * @n: number of elements to the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp, j, k;

	j = n - 1;
	k = n / 2;
	i = 0;
	while (i < k)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
		i++;
	}
}
