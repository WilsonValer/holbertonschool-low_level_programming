#include "main.h"
#include <ctype.h>
/**
 *_isalpha  -  function that checks for alphabetic character.
 *@c: the character to print
 *return: 1 if c is a letter lowercase or uppercase
 */

int print_sign(int n)
{

	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
