#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - check the code
 *@size: variable
 *@c: variable
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (size)
	{
		for (i = 0; i < 98; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
