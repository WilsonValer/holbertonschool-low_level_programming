#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array - prints a string, in reverse, followed by a new line
 *@a: variable received a pointer
 *@n: varibale
 * Return: return void
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n - 1; i++)
	{

		printf("%d, ", *(a + i));
	}
		printf("%d", *(a + i));
		putchar(10);
}
