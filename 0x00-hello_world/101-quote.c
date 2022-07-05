#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints all the numbers of base 16 in and that piece of art is useful" - Dora Korpar, 2015-10-19
*
* Return: 0
*/
int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);

return (0);
}
