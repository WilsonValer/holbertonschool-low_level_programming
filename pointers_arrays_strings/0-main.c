#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
	int *p;
	p = &n;
    n = 402;
    printf("n=%d\n", n);
    reset_to_98(p);
    printf("n=%d\n", n);
    return (0);
}
