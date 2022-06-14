#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int n;

	i = 0;

		while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			printf("%d", n);
				n++;
		}
		printf("\n");
		i++;
	}
}
