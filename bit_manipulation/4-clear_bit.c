#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 *clear_bit - check the code
 *@index: variable
 *@n: variable
 *Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
