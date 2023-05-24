#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - funtion main
 *@argc: number received
 *@argv: second number received
 * Return: return 0;
 * add new comment
 */
int main(int argc, char *argv[])
{
	int mul;
		if (argc == 3)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n",  mul);
		}
		else
		{

			printf("Error\n");
			return (-1);
		}
	return (0);
}
