/*
 * swap_int - swaps two numbes
 * @a: first number to be swaped
 * @b: second number to beswaped
 *
 * @c: to store one od ints
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
