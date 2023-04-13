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

	arr = malloc((min - max) * sizeof(int));
	if (!arr)
	{
                return (0);
	}
	if (min > max)
	{
		return (0);
	}
	while (i <= max - min)
	{
		arr[i] = arr[j];
		i++;
		j++;
	}
	return (arr);
}	
