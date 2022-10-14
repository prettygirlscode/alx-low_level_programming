#include <stdio.h>
/**
 * main -Entry point
 * Description: a program that prints the alphabet
 * except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az = 'a';

	for (az = 'a'; az <= 'z'; az++)
	{
	if (az != 'e' && az != 'q')
		putchar(az);
	}
	putchar('\n');
	return (0);
}
