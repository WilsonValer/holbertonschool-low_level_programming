#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: 0 if compilation is succesfully
 */
void times_table(void)
{
	int i, j;
	int m, d, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (j != 0)
			{
				if (m > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (m > 9)
				{
					d = m / 10;
					u = m % 10;
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else
				{
					_putchar(m + '0');
				}
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
