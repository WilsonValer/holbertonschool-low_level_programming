#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - prints a string, in reverse, followed by a new line
 *@str: variable received a pointer
 * Return: return void
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	i = len / 2;

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar(10);
}
