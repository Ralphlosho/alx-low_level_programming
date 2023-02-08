#include "main.h"

/**
 * _strspn - gets the length of a prefix substring that
 * matches character from a second string
 * @s: string from which to measure the substring
 * @accept: second string
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, c;

	j = 0;
	while (s[j] != 0)
		j++;
	i = 0;
	while (accept[i] != 0)
		i++;
	k = 0;
	while (k < j)
	{
		c = 0;
		while (c <  i)
		{
			if (s[k] == accept[c])
			{
				break;
			}
			else
				c++;
		}
		if (s[k] == accept[c])
			k++;
		else
			break;
	}
	return (k);
}
