#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: return void
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
