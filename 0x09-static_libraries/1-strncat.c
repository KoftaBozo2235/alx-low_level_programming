#include "main.h"
/**
 * *_strncat - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
*/
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j + i] = src[j];

	/*should end with a end of string char*/
	dest[i + j] = '\0';

	return (dest);
}
