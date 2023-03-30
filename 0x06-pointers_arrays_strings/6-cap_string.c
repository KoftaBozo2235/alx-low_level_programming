#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
int i;

while (str[i] !='\0')
{
	if (str[i] <= 97 && str[i] <= 122)
	{
	str[i] = str[i] - 32;
	}
i++;
}
return(str);
}
