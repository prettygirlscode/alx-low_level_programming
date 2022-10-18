#include "main.h"
#include <stdio.h>

/**
 * main - entry point of program
 * Return: Always returns 0 (success)
 */
int main(void)
{
	char *s = "_putchar\n";

	while (*s)
		putchar(*s++);
	return (0);
}
