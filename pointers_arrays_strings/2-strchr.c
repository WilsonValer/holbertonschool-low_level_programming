#include "main.h"
#include <stdio.h>
/**
 *_memcpy - function that locates a character in a string
 *@s: variable received number of character
 *@c: variable received type char
 *Return: return s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int r;
	char *zap = NULL;

	i = 0;

	while (s[i])
	{
		i++;
	}
	i++;
	r = 0;

	while (r <= i)
	{
		if (s[r] == c)
		{
			zap = &s[r];
			return (zap);

		}
		r++;

	}
	return (zap);

}
