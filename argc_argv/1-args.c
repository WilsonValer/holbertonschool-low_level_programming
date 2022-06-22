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
	if (argc >= 0)
	{
			argc--;
			printf("%d\n", argc);
	}
	
	return (0);
}
