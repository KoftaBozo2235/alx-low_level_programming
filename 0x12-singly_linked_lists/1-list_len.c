#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *thing;
	unsigned int i = 0;

	thing = h;
	while (thing)
	{
		i++;
		thing = thing->next;
	}
	return (i);
}
