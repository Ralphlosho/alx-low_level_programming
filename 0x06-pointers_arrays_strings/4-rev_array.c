#include "main.h"

/**
 * reverse_array - reverses the position of the elements
 * of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;

	k = 0;
	while (k < n - 1)
	{
		i = a[k];
		a[k] = a[n - 1];
		a[n - 1] = i;
		k++;
		n--;
	}
}
