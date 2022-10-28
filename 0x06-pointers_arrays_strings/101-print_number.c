/**
 * print_number - prints numbers using _putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
	int i = 0;
	char c;

	if (n == 0)
	{
		_putchar = ('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (;n;)
	{
		c = "0123456789"[n % 10];
		_putchar(c);
	}
}

