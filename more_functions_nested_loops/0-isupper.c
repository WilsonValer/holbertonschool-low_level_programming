#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks for uppercase character
 *@c: character received
 * Return: Returns 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}
