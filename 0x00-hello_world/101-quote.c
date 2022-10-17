#include <stdio.h>
#include <string.h>
/**
 * main -Entry poit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    for(i = 0; i < strlen(word); i++)
        putchar(word[i]);
    return (0);
  }
