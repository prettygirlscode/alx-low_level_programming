#include "main.h"

/**
 *_strcpy - copies string pointed to by src
 * @dest: destination of copied string
 * @src: copied string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
