#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 * @n: n is the max character to print
 *@dest: variable received
 *@src: variable received
 * Return: return dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

x = 0;
while ((x < n) && (src[x] != '\0'))
{
	dest[x] = src[x];
	x++;
}

while (x < n)
{
	dest[x] = '\0';

	x++;
}

return (dest);

}
