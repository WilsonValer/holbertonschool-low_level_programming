#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 *flip_bits - check the code
 *@n: variable
 *@m: variable
 *Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i, res = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);

}
