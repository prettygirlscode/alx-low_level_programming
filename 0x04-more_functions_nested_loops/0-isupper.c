#include "main.h"

/**
 *_isupper - checks lowercase characters
 * @c: integer parameter
 * Return: if uppercase, return 1 else return 0
 */

int _isupper(int c)
{
	if (c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
