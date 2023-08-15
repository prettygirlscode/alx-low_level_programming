#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 *
 * Return: Always returns 0 (success)
 */
int main(void)
{
	char *s = "_putchar\n";

	while (*s)
		putchar(*s++);
	return (0);
}

/* Alternate solution 

#include <unistd.h>
int main(void)
{
	return (write(1, "_putchar\n", 11);
}
*/
