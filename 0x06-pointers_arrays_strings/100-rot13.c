#include <string.h>
/**
 * rot13 - encode string by rot13 format
 * @str: the string to be encoded
 * Return: string
 */
char *rot13(char *str)
{
	int i, j, len, len2;
	char fsec[] = "ABCDEFGHIJKLMabcdefghijklm";
	char ssec[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	len = strlen(str);
	len2 = strlen(fsec);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if  (str[i] == fsec[j])
				str[i] = ssec[j];
			else if (str[i] ==  ssec[j])
				str[i] = fsec[j];
		}
	}
	return (str);
}
