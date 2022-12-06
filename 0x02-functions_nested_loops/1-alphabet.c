#include "main.h"

/**
 * print_alphabet - Function prototype
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}

/* alternate solution with a while loop*/


void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
}
