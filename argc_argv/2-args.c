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
	int count;
	if (argc > 0){
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
		return (0);
	}
}
