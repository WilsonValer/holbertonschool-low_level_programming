#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - check the code
 *@s1: variable
 *@s2: variable
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	int i;
	int len = strlen(s1);
	int len2 = strlen(s2);
	int lent = len + len2;


	str = malloc(sizeof(char) * lent);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = *s1;
		s1++;
	}

	for (i = len; i < lent; i++)
	{
		str[i] = *s2;
		s2++;
	}


	return (str);
}
