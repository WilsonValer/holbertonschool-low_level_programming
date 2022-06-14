#include "main.h"
#include <stdio.h>
/**
 * print_line - check that draws a diagonal line on the terminal
 *@n: number of times character
 * Return: return void
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
