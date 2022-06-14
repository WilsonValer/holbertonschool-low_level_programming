#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers  - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: return void
 */
void print_most_numbers(void)
{
	int n = -1;

	while (n < 9)
	{
		n++;
		if (n == 2 || n == 4)
		{
			continue;
		}
		printf("%d", n);
	}
}
