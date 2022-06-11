#include "main.h"
/**
 * 2-print_alphabet_x10 - Entry point
 *
 * Return: no tiene retorno
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
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
