
#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: string to search
 * @c: character to find in s
 * Return: pointer to first occurrence of character c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
