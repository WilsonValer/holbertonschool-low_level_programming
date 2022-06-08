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
    printf("Size of char: %zu bytes(s)\n", sizeof(char));
    printf("Size of int: %zu bytes(s)\n", sizeof(int));
    printf("Size of long int: %zu bytes(s)\n", sizeof(long_int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long_long_int));  
    printf("Size of float: %zu bytes(s)\n", sizeof(float));
    return (0);
}
