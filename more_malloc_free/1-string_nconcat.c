#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **string_nconcat - check the code
 *@s1: string
 *@s2: string
 *@n: bytes
 *Return: always return
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	 unsigned int i, lenTotal;
	unsigned int len_s1 = 0, len_s2 = 0;
		char *ptr;

		if (s1)
			len_s1 = len_string(s1);
		if (s2)
			len_s2 = len_string(s2);
	if (n >= len_s2)
		n = len_s2;
	if (n > 0)
		lenTotal = len_s1 + n + 1;
	else
		lenTotal = len_s1 + 1;
	if (s1 || s2)
		ptr = malloc(sizeof(char) * lenTotal);
	else if (!s1 && !s2)
		ptr = malloc(1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < lenTotal; i++)
	{
		if (i < len_s1)
		{
			ptr[i] = *s1;
			s1++;
		}
		else if (i < lenTotal)
		{
			ptr[i] = *s2;
			s2++;
		}
	}

	ptr[i] = '\0';
	return (ptr);
}

int len_string(char *string)
{
	int i = 0;

	while (string[i])
		i++;
return (i);
}






