/**
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n
	for (i = 0; i < n/2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
