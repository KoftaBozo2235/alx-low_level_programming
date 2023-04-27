#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *thing;
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}
	thing = malloc(sizeof(list_t));

	if (!thing)
	{
		return (NULL);
	}
	thing->str = strdup(str);
	thing->len = i;
	thing->next = (*head);
	(*head) = thing;
	return (*head);
}
