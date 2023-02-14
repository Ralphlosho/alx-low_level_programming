#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a 2d array of characters of 8 columns
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			_putchar(*(a[i] + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
