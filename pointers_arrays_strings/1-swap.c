#include "main.h"
#include <stdio.h>
/**
 *swap_int - print that swaps the values of two integers
 *@a: variable received how pointer
 *@b: variable received how pointer
 * Return: return void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
