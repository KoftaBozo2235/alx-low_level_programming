#include <stdio.h>
/**
 * main - main
 * Return: return
 */
int main(void)
{
char hambola = 'a';

for (;hambola <= 'z';)
{
if (hambola == 'e' || hambola == 'q')
{
continue;
}
putchar(hambola);
hambola++;
}

putchar('\n');
return (0);
}
