#include "main.h"
/**
 * more_numbers - prints 0 - 14 x10
 * Return: 0 - 14
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 11; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}
		_putchar(10);
	}

}
