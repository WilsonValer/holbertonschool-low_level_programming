#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - prints the numbers from 1 to 100
 *@n: variable received
 * Return: return value void
 */
void fizz_buzz(int n)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if (i % 15 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
		 i++;
	}

}
