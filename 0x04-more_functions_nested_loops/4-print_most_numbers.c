#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 followed
 * by a new line, but skips 2 and 4
 *
 * doesn't take any parameter
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == 50) && !(c == 52))
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
