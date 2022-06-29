#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - check the code
 *@s1: string
 *@s2: string
 *@n: bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 unsigned int i, lenTotal;
	unsigned int len_s1 = 0, len_s2 = 0;
		char *ptr;

		if (s1)
		{
			while (s1[len_s1])
				len_s1++;
		}
		if (s2)
		{
			while (s2[len_s2])
				len_s2++;
		}
	if (n > len_s2)
		n = len_s2;

	if (n > 0)
		lenTotal = len_s1 + n;
	else
		lenTotal = len_s1 + 1;
	ptr = malloc(sizeof(char) * lenTotal);
	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = *s1;
		s1++;
	}
	for (i = len_s1; i < lenTotal; i++)
	{
		ptr[i] = *s2;
		s2++;
	}

	ptr[i] = '\0';

	return (ptr);
}
