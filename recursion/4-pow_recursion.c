#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion  - check the code
 *@y: variable
 *@x: variable
 * Return: potencia
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y == 0)
	{
		res = 1;
	}
	else if (y > 1)
	{
		res = x * _pow_recursion(x, y - 1);
	}

	else
	{
		res = 1 / x * _pow_recursion(x, y + 1);
	}
	return (res);
}
