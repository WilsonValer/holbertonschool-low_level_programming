#include "main.h"
#include <stdio.h>
/**
 *_memcpy - function that copies memory area.
 *@dest: variable received number of character
 *@src: variable received type char
 *@n: variable received type pointer
 *Return: return s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)

	{
		dest[i] = src[i];
	}

	return (dest);
}
