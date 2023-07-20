#include <stdio.h>
#include <math.h>
/**
 * main - finds the greatest of 612852475143
 * Return: 0
 */
int main(void)
{
    unsigned long int n = 612852475143;
    unsigned long int i;
    while (n % 2 == 0) {
        n /= 2;
    }
    for (i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 2) {
        printf("%lu\n", n);
    }
    return (0);
}

