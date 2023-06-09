#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes funct
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
	while (i < size)
	{
		action(array[i]);
		i++;
	}
	}
}
