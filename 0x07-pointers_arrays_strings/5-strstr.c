#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: string to find substring in
 * @needle: substring to find in haystack
 * Return: Beginning of located substring
 * Or NULL is substring is not found
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (j = 0; needle[j] != '\0'; j++)

	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle);
			}
		}
	}

	return (NULL);
}
