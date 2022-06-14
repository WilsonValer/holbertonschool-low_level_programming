#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - Draws a diagonal line on the terminal
 *@n: number of timies character
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int r;

	if (n > 0)
	{
		i = 0;
		while (i <  n)
		{
			r = 0;
			while (r < i)
			{
				_putchar(32);
				r++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');

	}
}
