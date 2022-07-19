#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 *get_bit - check the code
 *@index: variable
 *@n: variable
 *Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	if (index > 64)
		return (-1);
	store = (n >> index) & 1;
	return (store);
}
