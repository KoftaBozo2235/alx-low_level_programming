#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	   for(int i=0; src[j]!='\0'; j++)
    {

        dest[i]=src[j];
        i++;
    }
    dest[i]='\0';
