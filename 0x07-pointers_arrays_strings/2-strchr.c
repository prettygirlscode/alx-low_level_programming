
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string to search
 * @c: character to find in s
 * Return: pointee to first occurrence of character c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

