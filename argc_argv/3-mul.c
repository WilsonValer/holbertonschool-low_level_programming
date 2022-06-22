#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - funtion main
 *@argc: number received
 *@argv: second number received
 * Return: return 0;
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int mul;
	int i;

		if (argc > 0)
		for (i = 0; i < argc; i++)
		{
			mul = atoi(argv[i]) * atoi(argv[i + 1]);
			printf("%d\n",  mul);
		}
	return (0);
}
