#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion  - check the code
 *@s: variable
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
