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
 * a = 97
 * z = 122
 */
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}

for (ch = 0x61; ch <= 0x66; ch++)
{
putchar(ch);
}

putchar(10);
return (0);
}
