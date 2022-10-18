#include "main.h"
/**
 * _abs - computes absolute number
 *
 *@x: the character to print
 *
 * Return: return x * (-1)) if x < 0, return x if x >= 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		return  (x * (-1));
	}
	else
		return (x);
}
