#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	
	char *hamdy = dest;
	int i = 0;
	
	
	while (dest[i] !='\0')
	{
		i++;
	}
	
	while (src[i] !='\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i]='\0';
	return(hamdy);
}
