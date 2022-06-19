#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that fills memory with a constant byte
 *@n: variable received number of character
 *@b: variable received type char
 @s: variable received type pointer
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
