#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @x: character to be printed
 * Return: returns x % 10
 */

int print_last_digit(int x)
{
	int n;

	n = x % 10;

	if (n < 0)
	{
		n = n * (-1);
	}

	_putchar(48 + n);

	return (n);
}
