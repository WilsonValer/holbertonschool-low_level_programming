#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int r;

	if (size > 0)
	{
		r = 1;
		while(r <= size)
		{
			i = 1;
			while (i <=  size)
			{
				_putchar(35);
				i++;
			}
			printf("\n");
			r++;
		}
	}
	else if (size <=  0)
	{
		printf("\n");
	}
}
