#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line made of the concatenation
 * of n iterations of the character "_".
 * @n: an integer representing the number of iterations of "_".
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
