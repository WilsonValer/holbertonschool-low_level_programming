#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev  - prints a string, in reverse, followed by a new line
 *@s: variable received a pointer
 * Return: return void
 */
void print_rev(char *s)
{

	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)

		_putchar(s[i]);

}
