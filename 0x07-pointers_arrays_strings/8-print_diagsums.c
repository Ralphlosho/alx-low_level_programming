#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of  a square matrix
 * @a: pointer to a squre matrix (2d array of equal number of
 * rows and columns)
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, b, c, d;

	c = 0;
	d = 0;
	i = 0;
	while (i < size)
	{
		b = a[i * (size + 1)];
		c = c + b;
		i++;
	}
	i = 1;
	while (i <= size)
	{
		b = a[i * (size - 1)];
		d = d + b;
		i++;
	}
	printf("%d, %d\n", c, d);
}
