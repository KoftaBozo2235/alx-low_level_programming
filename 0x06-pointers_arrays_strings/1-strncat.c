
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
int i = 0;
int j = 0;

while (dest[i] !='\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
j++;
dest[i + j] = src[i];
}

dest[i + j] = '\0';
return (dest);
}
