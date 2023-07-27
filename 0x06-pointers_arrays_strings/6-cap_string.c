#include "main.h"
/**
 *
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i - 1] == ' ' || i == 0 || s[i - 1] == '\n' || s[i - 1] == '\t' || str[i - 1] == ',' || str[i - 1] == ';' 
			|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}') && s[i] >= 'a' && s[i] <= 'z') 
			s[i] -= 'a' - 'A';
	}
	return (s);
}			
