#include "main.h"
/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void puts_half(char *str)
{
	int i;
	int half;

	while (str[i])
	{
		i++;
	}
	half = i / 2;

	while (str[half])
	{
	_putchar(str[half];
	half++;
	}
}
