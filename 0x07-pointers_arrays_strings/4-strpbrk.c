#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes whose elements should be searched
 * in s
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i, k, c;

	j = 0;
	while (s[j] != '\0')
		j++;
	i = 0;
	while (accept[i] != '\0')
		i++;
	k = 0;
	while (k < j)
	{
		c = 0;
		while (c < i)
		{
			if (s[k] == accept[c])
			{
				return (s + k);
			}
			else
				c++;
		}
		k++;
	}
	return (NULL);
}
