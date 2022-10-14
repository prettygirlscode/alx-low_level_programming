#include <stdio.h>
/* more headers goes there */

/**
 *  *main - Entry point
 *   *Description: a program that prints the alphabet in upper and lowercase
 *    *Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for  (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
		putchar('\n');
	return (0);
}
