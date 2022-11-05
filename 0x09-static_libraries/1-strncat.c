/**
 * _strncat - a function that concatenates two strings
 * @dest: copy from
 * @src: copy to
 * @n: bytes used
 * Return: concatenated stringst
 */

#include <stdio.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

