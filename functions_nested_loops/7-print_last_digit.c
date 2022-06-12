#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 *int print_last_digit  - return the last digit of a number
 *
 * @n: Number recevied
 *
 * Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int m;
	int b;

	b = abs(n);
	if (b >= 10)
	{
		m = (b % 10);

		return (m);
	}
	else
	{
		return (b);
	}
}
