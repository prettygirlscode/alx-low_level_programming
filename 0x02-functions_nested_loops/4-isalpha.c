#include "main.h"

/**
 * _isalpha - checks lowercase and uppercase characters
 * @c: integer parameter
 * Return: if lowercase or uppercase, return 1 else return 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
