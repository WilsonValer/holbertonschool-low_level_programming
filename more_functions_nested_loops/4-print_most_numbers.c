#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n = -1;

	while (n < 9)
	{
		n++;
		if (n == 4)
		{
			continue;
		}
		printf("%d", n);
	}
}
