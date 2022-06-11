#include "main.h"
#include <ctype.h>
/**
 * _islower(int c) - function that checks for lowercase character
 *
 *Returns 1 if c is lowercase
 *Returns 0 otherwise
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
