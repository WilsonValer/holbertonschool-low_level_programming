#include "main.h"
/**
 * 2-print_alphabet_x10 - prints 10 times the alphabet
 *
 * in lowercase, followed by a new line.
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
