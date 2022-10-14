#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *Description: a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
		putchar('\n');
	return (0);
}
