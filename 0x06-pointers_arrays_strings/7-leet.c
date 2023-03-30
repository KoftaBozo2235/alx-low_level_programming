#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int i;
	int ii;

	char *thing = "aeotl";
	char *thing2 = "AEOTL";
	char *thing3 = "43071";

	while (s[i] != '\0')
	{
		for (ii = 0; ii < 5; ii++)
		{
		if (s[i] == thing[ii] || s[i] == thing2[ii])
		{
			s[i] = thing3[ii];

		}
		}
	i++;
	}
return (s);
}
