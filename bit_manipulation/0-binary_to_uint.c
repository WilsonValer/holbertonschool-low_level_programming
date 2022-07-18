#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - check the code
 *@b: variable
 *Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;

	for (i = 0; *b; b++)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			break;
	}
	return (i);
}

