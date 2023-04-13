#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
       unsigned int size1 = 0;
       unsigned int size2 = 0;
        unsigned int i = 0;
        unsigned int j = 0;
	char *p;

        p = malloc(size1 + n + 1 * sizeof(char));
        if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size1])
        {
                size1++;
        }
        while (s2[size2])
        {
                size2++;
        }
        if(n > size2)
	{
		n = size2;
	}
        while (i < size1)
        {
                p[i] = s1[i];
                i++;
        }
        while (i - size1 < n)
        {
                p[i] = s2[j];
                i++;
                j++;
        }
        return (p);
}
