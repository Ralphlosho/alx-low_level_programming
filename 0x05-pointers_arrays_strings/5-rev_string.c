#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char a[580];
	int i, j, k;

	j = 0;
	while (!(*(s + j) == 0))
		j++;
	i = 1;
	while (i <= j)
	{
		*(a + (i - 1)) = *(s + j - i);
		i++;
	}
	k = 0;
	while (k < j)
	{
		*(s + k) = *(a + k);
		k++;
	}
}
