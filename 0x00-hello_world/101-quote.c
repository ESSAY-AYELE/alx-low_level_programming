<<<<<<< HEAD
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
=======
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
>>>>>>> 91d52f087eb37c11c3f727c8d94fb9c5211e77a5
