#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int r;

	if (n > 0)
	{
		i = 1;
		while (i <=  n)
		{
			_putchar(92);
			printf("\n");
			r = 0;
			while (r <= i)
			{
				_putchar(32);
				r++;
			}
			i++;
		}
	}
	else if (n == 0 || n < 0)
	{
		printf("\n");

	}
}
