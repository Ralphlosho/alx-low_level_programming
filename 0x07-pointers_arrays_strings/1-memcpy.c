#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: string to copy to
 * @src: memmory area to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char  *p;

	p = dest;
	i = 0;
	while (i < n)
	{
		dest[0 + i] = src[i];
		i++;
	}
	return (p);
}
