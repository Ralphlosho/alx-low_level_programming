#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, k;

	j = 0;
	while (!(*(str + j) == '\0'))
		j++;
	if (j % 2 == 0)
	{
		i = j / 2;
		while (i < j)
		{
			_putchar(*(str + i));
			i++;
		}
		_putchar('\n');
	}
	else
	{
		k = ((j - 1) / 2) + 1;
		while (k < j)
		{
			_putchar(*(str + k));
			k++;
		}
		_putchar('\n');
	}
}
