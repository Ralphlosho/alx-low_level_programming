#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string from which to locate the substring
 * @needle: substring to be located in haystack
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i, k, c;

	j = 0;
	while (haystack[j] != '\0')
		j++;
	i = 0;
	while (needle[i] != '\0')
		i++;
	k = 0;
	while (k <= j - i)
	{
		if (haystack[k] == needle[0])
		{
			c = 1;
			while (c < i)
			{
				if (haystack[k + c] == needle[c])
				{
					c++;
				}
				else
					break;
			}
		}
		if (c == i)
		{
			return (haystack + k);
		}
		k++;
	}
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	else
		return (NULL);
}
