#include "main.h"
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
