#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **string_nconcat - check the code
 *@s1: string
 *@s2: string
 *@n: bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 int i;
	int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	int lenTotal;
		char *ptr;
	if (n > len_s2)
		n = len_s2;

	if (n > 0)
		lenTotal = len_s1 + n + 1;
	else
		lenTotal = len_s1 + 1;
	ptr = malloc(sizeof(char) * lenTotal);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

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
