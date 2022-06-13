#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks if the param is letter
 *
 * @c: ASCII received
 *
 * Description: Checks if the param is a letter.
 *
 * Return: If the param is a letter lowercae return 1 if not return 0
 */
int _isalpha(int c)
{

	if (isalpha(c))
		return (1);
	else
		return (0);
}
