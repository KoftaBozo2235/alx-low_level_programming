#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 1;

	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
printf("%d\n", sum);
return (0);
}
