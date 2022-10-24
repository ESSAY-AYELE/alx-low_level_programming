#include <string.h>
/**
 *
 * _strcpy - copy one string to onther arry
 * @dest: copied to
 * @src: copied from
 *
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest,src);
	return (&dest);
}
