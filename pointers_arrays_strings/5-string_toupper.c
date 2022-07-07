#include "main.h"
#include <stdio.h>
/**
 *string_toupper - lowercase letters of a string to uppercase
 *@s: variable received
 * Return: return dest;
 * parameters:
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}

		i++;
	}
	return (s);
}
