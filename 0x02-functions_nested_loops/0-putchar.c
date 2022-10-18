#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: a program tha prints "_putchar"
 * return: Always 0 (Success)
 */

int main(void)
{
	char *s = "_putchar\n";

	while (*s)
		putchar(*s++);
	return (0);
}
