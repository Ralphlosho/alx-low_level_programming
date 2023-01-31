#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string, to be concatenated to the first
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
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
	k = 0;
	while (k <= j)
	{
		*(dest + i + k) = *(src + k);
		k++;
	}
	p = dest;
	return (p);
}
