#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	size_t thing;
	int i;
	
	thing = h;
	while (thing)
	{
		i++;
		thing->next;
	}
	return (i);
}
