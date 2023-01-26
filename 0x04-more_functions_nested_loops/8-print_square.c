#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int m, i;

	if (size > 0)
	{
		m = 1;
		while (m <= size)
		{
			i = 1;
			while (i <= size)
			{
				_putchar(35);
				i++;
			}
			_putchar('\n');
			m++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
