#include "main.h"

/**
 * _strncpy - copies n bytes from a string to  a nother one
 * @dest: string to which another one is copied
 * @src: source string
 * @n: number of bytes of src to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p;

	i = 0;
	while (i < n && !(src[i] == '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	p = dest;
	return (p);
}
