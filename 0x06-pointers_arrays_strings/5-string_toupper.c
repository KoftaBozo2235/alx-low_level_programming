#include "main.h"
/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
*/

char *string_toupper(char *str)
{
int i = 0;
while (str[i] !='\0')
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
i++;
}
return (0);
}
