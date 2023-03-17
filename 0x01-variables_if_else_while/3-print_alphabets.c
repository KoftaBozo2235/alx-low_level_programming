#include <stdio.h>
/**
 * main - main
 * Return: return
 */
int main(void)
{
        char hambola = 'a';
	char hambola2 = 'A';

        while (hambola <= 'z')
        {
                putchar(hambola);
                hambola++;
        }

	while (hambola2 <= 'Z')
	{
		putchar(hambola2);
		hambola2++;
	}

        putchar('\n');
        return (0);
}
