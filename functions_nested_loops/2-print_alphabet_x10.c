#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int ch = 97;

		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar(10);
	}

}
