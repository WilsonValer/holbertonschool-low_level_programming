#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *print_binary - check the code
 *@n: variable
 *Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	long int i;
	int flag;
	unsigned long int mask = sizeof(int) * 8 - 1;

	if (n == 0)
		_putchar('0');

	for (i = mask; i >= 0; i--)
	{
		if (n & (1 << i))
			flag = 1;

		if (flag == 1)
		{
			if (n & (1 << i))
				_putchar('1');
			else
				_putchar('0');
		}
	}

}

