#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **malloc_checked - check the code
 *@b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}


			return (0);
}
