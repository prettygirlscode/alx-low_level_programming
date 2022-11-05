#include <stdio.h>
#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string to find substring in
 * @needle: substring to find in haystack
 * Return: Beginning of located substring
 * Or NULL is substring is not found
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}
