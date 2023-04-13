#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	p = malloc (nmemb * size);
	return (p);
}
