#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 **malloc_checked - check the code
 *@b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	if (b >= UINT_MAX || b == 0)
	{
		return (0);
	}

	ptr = malloc(b);

	if (!*ptr)
	{
		free(ptr);
		exit(98);
	}


			return (ptr);
}
