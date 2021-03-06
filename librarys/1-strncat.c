#include "main.h"

/**
 * *_strncat -  function that concatenates two strings
 * @n: is a max variable received to print
 * @dest: variable received
 *@src: variable received
 * Return: return dest;
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((j < n) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

		return (dest);
}
