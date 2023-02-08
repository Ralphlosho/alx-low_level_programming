#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string from which to locate the character
 * @c: character to locate
 *
 * Return: a pointer to the first occurence of the character or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, j;

	j = 0;
	while (s[j] != 0)
		j++;
	i = 0;
	while (i <= j)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
