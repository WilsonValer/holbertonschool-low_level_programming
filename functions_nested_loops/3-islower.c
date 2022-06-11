#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if the param is lowercase
 *
 * work fucntion
 *
 * Description: Checks if the param is lowercase.
 *
 * Return: 1 if is lowercase or 0 is not
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
