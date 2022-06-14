#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			putchar(95);
			i++;
		}
		printf("\n");
	}
	else if (n == 0 || n < 0)
	{
		printf("\n");

	}
}
