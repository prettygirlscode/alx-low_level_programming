#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * count is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	
	}
	for (j = i; str[j - 1] != '\0'; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
