#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int j = min;

	if (min > max)
	return (0);

	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
	{
		return (0);
	}

	while (i <= max - min)
		arr[i++] = j++;
	return (arr);
}
