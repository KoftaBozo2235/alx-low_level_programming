#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - is main
 * Return: is return
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        scanf("%d", &n);
	if (n > 0)
	{
	printf("%d is positive");
	}
	else if (n < 0)
	{
	printf("%d is negative");
	}
	else if (n = 0)
	{
	printf("%d is zero");
	}
	return (0);
}
