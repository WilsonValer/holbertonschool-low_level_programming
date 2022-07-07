#include "main.h"
#include <ctype.h>
/**
 * _islower - function that checks for lowercase character
 *@c: the cgarcater to print
 *Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
