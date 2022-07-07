#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - check the code
*@n: variable
*@separator: variable int
*Return: Always 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int result;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(ptr, int);
		printf("%d", result);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);

}
