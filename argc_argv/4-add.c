#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - funtion main
 *@argc: number received
 *@argv: second number received
 * Return: return 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				if (atoi(argv[i]) != 0)
				{
					sum =  sum + atoi(argv[i]);
				}
				if (atoi(argv[i]) == 0)
				{
					printf("Error\n");
					return (-1);
				}
			}
		}

			printf("%d\n", sum);
	return (0);
}
