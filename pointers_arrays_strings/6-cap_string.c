#include "main.h"
#include <stdio.h>
/**
 *cap_string - function that capitalizes all words of a string
 *@n:variable received
 *Return: return
 */
char *cap_string(char *n)
{
	int i, j;
	int cap = 32;
	int sepa[12] = {',', ';', '.', '?', '"',
				'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sepa[j])
			{
				cap = 32;
				break;
			}
		}
	}
	return (n);
}
