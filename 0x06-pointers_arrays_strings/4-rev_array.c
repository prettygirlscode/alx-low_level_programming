#include "main.h"
/**
 * reverse_array - a function that prints a string in reverse
 * @a: reversed array
 * @n: content of array
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int i,  tmp;



	for (i = 0; i < n; i++)

	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
