#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the
 * terminal usin n iterations of '\'.
 * @n: number of iterations of '\' to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, m;

	if (n > 0)
	{
		m = 1;
		while (m <= n)
		{
			i = 1;
			while (i <= m)
			{
				if (!(i == 1))
				{
					_putchar(' ');
				}
				i++;
			}
			_putchar(92);
			_putchar('\n');
			m++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
