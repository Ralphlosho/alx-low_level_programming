#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int i, j, b, k, a, c;

	c = n;
	if (n != 0)
	{
		j = 0;
		while (n != 0)
		{
			n = n / 10;
			j++;
		}
		n = c;
		i = j - 1;
		while (i >= 0)
		{
			a = 1;
			k = i;
			while (k >= 0)
			{
				if (k != 0)
					a = a * 10;
				k--;
			}
			if (n < 0)
			{
				_putchar(45);
				n = n * -1;
			}
			b = n / a;
			_putchar(b + '0');
			n = n % a;
			i--;
		}
	}
	else
		_putchar(48);
}
