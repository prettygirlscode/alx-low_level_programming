#include "main.h"

/**
 *  _islower - checks lowercase characters
 * @c: integer parameter
 * Return: if lowercase, return 1 else return 0
 */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
