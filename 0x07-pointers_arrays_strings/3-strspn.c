#include <stdio.h>
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: string to search
 * @accept: substring to be searched in s
 * Return: lenght of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}

		if (s[i] != (accept[j]))
		{
			break;
		}
	}
	return (i);
}
