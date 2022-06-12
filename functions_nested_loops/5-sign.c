#include "main.h"
#include <ctype.h>
/**
 *print_sign - return  that  the sign of a number
 *@n: the character to print
 *return: return the sign of a number
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
