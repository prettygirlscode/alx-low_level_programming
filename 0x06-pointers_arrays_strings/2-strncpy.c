/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: bytes used
 * Return: copied string
 */

#include <stdio.h>
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

