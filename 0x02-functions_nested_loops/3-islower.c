#include <ctype.h>
/**
 *
 *_islower - check whether lower case or not.
 *   *
 *
 *Return: 1 if c if lowercase else 0.
 *    
*/
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else return (0);
}
