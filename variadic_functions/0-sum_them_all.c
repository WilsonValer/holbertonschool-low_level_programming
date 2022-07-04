#include <stdio.h>
#include "variadic_functions.h"

/**
 *sum_them_all - check the code
 *@n: variable int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	int result;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(ptr, int);
		sum += result;
	}

	va_end(ptr);
		return (sum);
}
