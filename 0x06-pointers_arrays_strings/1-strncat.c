#include "main.h"

/**
 * _strncat - concatenates n bytes of a string to another
 * @dest: a string
 * @src: string whose bytes are concatenated
 * @n: number of strings to concatenate
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	char *p;

	i = 0;
	while (i >= 0)
	{
		if (*(dest + i) == '\0')
			break;
		i++;
	}
	j = 0;
	while (!(*(src + j) == '\0'))
		j++;
	if (n > j - 1)
	{
		k = 0;
		while (k <= j)
		{
			*(dest + i + k) = *(src + k);
			k++;
		}
	}
	else if (j - 1 >= n)
	{
		k = 0;
		while (k <= n - 1)
		{
			*(dest + i + k) = *(src + k);
			k++;
		}
	}
	p =  dest;
	return (p);

}
