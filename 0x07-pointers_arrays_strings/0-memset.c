#include "main.h"

/**
 * _memset - fills memory with a constant byte starting from
 * a specific point in a memory area pointed to by a pointer
 * @s: pointer pointing to memory area to be filled
 * @b: character with which to fill the area
 * @n: number of bytes to be filled in that area
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
