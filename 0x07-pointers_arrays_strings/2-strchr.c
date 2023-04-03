#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s !='\0')
	{
		if(*s == c)
		{
			return (s);
			}
	i++;
	}
return (0);
}
