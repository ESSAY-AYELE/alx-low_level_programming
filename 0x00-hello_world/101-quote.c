#include <stdio.h>
#include <string.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;
    
    char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    j=strlen(word);
    for(i = 0; i < j; i++)
        putchar(word[i]);
    putchar('\n');
    return (0);
}
