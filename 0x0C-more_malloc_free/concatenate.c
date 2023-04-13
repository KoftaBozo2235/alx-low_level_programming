#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int size1 = 0;
        int size2 = 0;
        int i = 0;
        int j = 0;
        char *s1;
        char *s2;
        char *s3;

        s1 = "Hamdy";
        s2 = "Kersha";
        s3 = malloc(i * sizeof(char));
        while (s1[size1])
        {
                size1++;
        }
        while (s2[size2])
        {
                size2++;
        }
        printf ("size of first string = %i\n", size1);
        printf ("size of second string = %i\n", size2);
        while (i < size1)
        {
                s3[i] = s1[i];
                putchar (s3[i]);
                i++;
        }
        while (i - size1 < size2)
        {
                s3[i] = s2[j];
                putchar (s3[i]);
                i++;
                j++;
        }
        putchar('\n');
        return (0);
}
