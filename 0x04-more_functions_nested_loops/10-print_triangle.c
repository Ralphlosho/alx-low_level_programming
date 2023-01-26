#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal with the 
 * character '#'
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int m, i;

	if (size > 0)
	{
		m  = 1;
		while (m <= size)
		{
			i = 1;
			while (i < size)
			{
				if (i <= (size - m))
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
				i++;
			}
			_putchar(35);
			_putchar('\n');
			m++;
		}
	}
	else
		_putchar('\n');
}
