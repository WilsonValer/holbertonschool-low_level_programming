#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_strdup - check the code
 *@str: variable
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *strd = NULL;
	int i;
	int len;

	if (str == NULL)
	{
	return (NULL);
	}

	len = strlen(str);

	strd = malloc(sizeof(char) * len + 1);


	for (i = 0; i < len; i++)
	{
		strd[i] = *str;
		str++;
	}

	return (strd);
}
