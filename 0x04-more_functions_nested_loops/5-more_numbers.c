#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints ten times numbers 0 to 14 followed
 * by a new line
 * doesn't take any argument
 *
 * Return: void
 */
void more_numbers(void)
{
	int j = 0, c, temp;

	while (j < 10)
	{
		c = 48;
		while (c < 63)
		{
			temp = c;
			if (c > 57)
			{
				_putchar(49);
				c = c - 10;
			}
			_putchar(c);
			if (temp > 57)
			{
				c = c + 10;
			}
			c++;
		}
		_putchar('\n');
		j++;
	}
}
