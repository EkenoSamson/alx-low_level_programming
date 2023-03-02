#include "main.h"

/**
 * reverse_array - a function that reverses the content of array of integers
 * @a: array of integers
 * @n: number of integers
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int b;

	while (c < n)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
		c++;
	}
}
