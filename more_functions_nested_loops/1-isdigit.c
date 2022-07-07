#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 *@c: character received ACII
 * Return: Returns 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
