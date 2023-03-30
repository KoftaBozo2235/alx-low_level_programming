#include "main.h"
/**
 * reverse_array - reverse a int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	while (i < n)
	{
		i++;
	}

	while (i >= j)
	{
		a[j] = a[i];
		j++;
		i--;
	}
}
