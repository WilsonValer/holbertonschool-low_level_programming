#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>
int main(void)
{
	int long_int;
    int long_long_int;
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long_int));
    printf("Size of long long int: %zu byte\n", sizeof(long_long_int));  
    printf("Size of float: %zu bytes\n", sizeof(float));
    return (0);
}
