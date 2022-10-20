#include "main.h"

/**
 * _isdigit - checks lowercase characters
 *  @c: integer parameter
 *  Return: if digit, return 1 else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}


