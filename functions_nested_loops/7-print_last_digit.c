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
		if (n == -2147483648)
		{	m = 8;
			result = m;
			_putchar('0' + m);
		}
		else if (n == 1)
		{
			m = 1;
			result = 1;
			_putchar('0' + m);

		}
		else
		{
			result = b;
			_putchar('0' + b);
		}
	}
	return (result);
}
