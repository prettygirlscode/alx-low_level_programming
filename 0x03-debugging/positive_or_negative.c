#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: This program will assign a random number to the variable n.
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	
	else 
	{
		printf("%d is zero\n", i);
	}

}

