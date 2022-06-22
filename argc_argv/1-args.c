#include "main.h"
#include<stdio.h>
/**
 *main - funtion main
 *@argc: number received
 *@argv: second number received
 * Return: return 0;
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%d", count);
		}
	}
	return (0);
}
