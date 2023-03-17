#include <stdio.h>
/**
 * main - main
 * Return: kershak yalla
 */
int main(void)
{
int n = 0;
int m = 0;
while (n <= 9)
{
putchar(48 + n);
n++;
}
while (m <= 4)
{
putchar(97 + m);
m++;
}
putchar('\n');
return (0);
}
