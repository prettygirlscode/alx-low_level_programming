#include <stdio.h>
#include <ctype.h>
/**
 *main - Prints all single digits with , and space followed by new line
 *
 *Return: returns 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
