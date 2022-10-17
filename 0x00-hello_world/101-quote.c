nclude <stdio.h>

/**
 *
 *  * main -Entry poit
 *
 *   *
 *
 *    *Return: Always 0 (Success)
 *
 *     */

int main(void)
{

	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

        for(int i = 0; i < strlen(word); i++)
		putchar(word[i]);
	return (0);
}
