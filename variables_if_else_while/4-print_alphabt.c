 #include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int ch;
/*
 * a = 97 ascii
 * z = 122
 */
for (ch = 97; ch <= 122; ch++)
{
if (ch != 101 && ch != 113)
{
putchar(ch);
}
}
putchar(10);
return (0);
}
