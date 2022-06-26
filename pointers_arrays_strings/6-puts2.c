#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - prints a string, in reverse, followed by a new line
 *@str: variable received a pointer
 * Return: return void
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar(10);
}
