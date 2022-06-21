#include "main.h"
#include <stdio.h>
/**
 *factorial  - check the code
 *@n: variable
 * Return: factorial
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	else
	{
		result = n * factorial(n - 1);
		return (result);
	}
}
