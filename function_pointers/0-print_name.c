#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - check the code
 *@name: variable
 *@f: variable
 *Return: Always void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(0);
	}
	else
	{
		f(name);
	}
}
