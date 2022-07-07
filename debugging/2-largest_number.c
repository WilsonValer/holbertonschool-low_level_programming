#include <stdio.h>
#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a >= b && b > c) || (a >= b && c > b))

	{
		largest = a;
	}
	else if ((b > a && c > a) || (a == c && a > c) || (b > a && a > c))

	{
		largest = b;
	}
	else if ((c > b && b > a) || (b == c && a > b) || (c > b && a > b))
	{
		largest = c;
	}

	else if (c == a && a == b)
	{
		largest = c;
	}
	return (largest);
}
