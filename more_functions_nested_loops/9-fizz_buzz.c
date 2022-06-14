#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
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
			printf("Fizz Buzz")
		}
		else
		{
			printf("&d", i);
		}
		printf("\n");
		 i++;
	}

}
