#include <stdio.h>
/**
 * main -Entry point
 * Description:  a C program that prints the size of various data types.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %1d byte(s)", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)", (unsigned long) sizeof(d));
	printf("size fo a float: %lu byte(s)", (unsigned long)sizeof(e));
	return (0);
}
