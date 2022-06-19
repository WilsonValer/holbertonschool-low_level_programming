#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 *@dest: variable received
 *@src: variable received
 @n: variable received
 * Return: return dest;
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n -= 1;
	for (i = 0; i < n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

