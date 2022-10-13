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

	printf("size of a char: %1d byte(s)\n" sizeof(a));
	printf("size of an int: %1d bytes(s)\n" sizeof(b));
	printf("size of a long int: %1d byte(s)" sizeof(c));
	printf("size of a long long int: %1d byte(s)" sizeof(d));
	printf("size fo a float: %1d byte(s)" sizeof(e));
	return (0);
}
