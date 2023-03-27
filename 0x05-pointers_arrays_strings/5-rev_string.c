#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
	int length =0;
	int temp;

	while (s[length])
	{
		length++;
		temp = length;
	}

	while (s[temp])
	{
		_putchar(s[temp]);
		temp--;
	}
}
