#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
printf("Size of a int: %lu bytes(s)\n", sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}