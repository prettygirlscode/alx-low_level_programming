#include "main.h"

/**
 * print_alphabet_x10 - Function prototype
 *
 * Description: a program that prints the alphabet in lowercase ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}	_putchar('\n');
}
