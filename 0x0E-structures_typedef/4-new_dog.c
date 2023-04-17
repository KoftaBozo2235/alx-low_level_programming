#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int size_of_owner = 0;
	int size_of_name = 0;
	int i;
	dog_t *hamdy;

	while (name[size_of_owner])
	{
		size_of_owner++;
	}
	while (name[size_of_name])
	{
		size_of_name++;
	}
	hamdy = malloc(sizeof(dog_t));
	if (hamdy == NULL)
	{
	free(hamdy);
	return (0);
	}
	hamdy->name = malloc(size_of_name * sizeof(hamdy->owner));
	if (hamdy->name == NULL)
	{
		free(hamdy->name);
		free(hamdy);
		return (NULL);
	}
	for (i = 0; i <= size_of_name; i++)
		hamdy->name[i] = name[i];
	hamdy->age = age;
	hamdy->owner = malloc(size_of_owner * sizeof(hamdy->owner));
	if (hamdy->owner == NULL)
	{
		free(hamdy->owner);
		free(hamdy->name);
		free(hamdy);
		return (NULL);
	}
	for (i = 0; i <= size_of_owner; i++)
		hamdy->owner[i] = owner[i];
	return (hamdy);
}
