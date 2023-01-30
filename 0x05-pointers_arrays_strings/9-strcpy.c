#include "main.h"

/**
 * _strcpy - copies the string pointed to by a pointer to a
 * buffer pointed by another
 * @dest: pointer to a buffer
 * @src: pointer to a string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j, i;
	char *p;

	j = 0;
	while (!(*(src + j) == '\0'))
		j++;
	i = 0;
	while (i <= j)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	p = dest;
	return (p);
}
