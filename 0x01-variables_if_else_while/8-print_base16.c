#include <stdio.h>
/**
 * main - Entry point
 * Description: printing in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char af;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');

	return (0);
}
