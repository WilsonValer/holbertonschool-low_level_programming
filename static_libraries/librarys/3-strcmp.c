#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 *@dest: variable received
 *@src: variable received
 @n: variable received
 * Return: return dest;
 */
int _strcmp(char *s1, char *s2)
{
	while ((s1 != '\0' && s2 != '\0') && (s1 == s2))
	{
		s1++;
		s2++;
	}

	if (s1 == s2)
	{
		return (0);
	}

	else
	{
		return (s1 - s2);
	}
}
