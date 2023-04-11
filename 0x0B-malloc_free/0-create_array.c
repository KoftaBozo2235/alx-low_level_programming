#include "main.h"

/**
 *create_array - array for prints a string
 *@size: number elements array
 *@c: char
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *thing;
unsigned int i;

if (size == 0)
{
	return (NULL);
}

thing = (char *) malloc(size * sizeof(c));

if (thing == 0)
{
	return (NULL);
}
else
	{
i = 0;
while (i < size)
{
*(thing + i) = c;
i++;
}

return (buffer);
}
