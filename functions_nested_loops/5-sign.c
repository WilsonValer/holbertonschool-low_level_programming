#include "main.h"
#include <ctype.h>
/**
 *print_sign  -  a function that prints the sign of a number
 *@n: the character to print
 *return: 1 and printf 
 */

int print_sign(int n)
{

	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n < 0)
	{	_putchar('-');
		return (-1);
	}
	else
	{	_putchar('0');
		return (0);
	}
}
