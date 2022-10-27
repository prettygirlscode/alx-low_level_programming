
#include "main.h"


/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: Always 0
 */
char *leet(char *s)
{
	int i, j;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char n[] = "43071";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; lower[j] != 0; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
			{
				s[i] = n[j];

			}

		}
	
	}
	return (s);
}
