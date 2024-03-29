#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return : void
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (!(*(s + i) == '\0'))
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
