#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
/**
 *print_last_digit  - prints the last digit of a number
 *
 * @n: Number received
 *
 * Return: return the last digit of a number
 */
int print_last_digit(int n)
{
	int m = 0;
	int b;
	int result = 0;

	b = abs(n);
	if (b >= 10)
	{
		m = (b % 10);
		result = m;

		_putchar('0' + m);

	}
	else
	{
		result = b;
		_putchar('0' + b);
	}
	return (result);
}
