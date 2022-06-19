#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 *@dest: variable received
 *@src: variable received
 @n: variable received
 * Return: return dest;
 */
char *string_toupper(char *);
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
