#include "main.h"

/**
 * rot13 - encodes a string into ROT13
 * @a: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *a)
{
	int i, j;
	char *b = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM\
		abcdefghijklmnopqrstuvwxyzabcdefghijklm";

	j = 0;
	while (a[j] != '\0')
	{
		i = 0;
		while (i < 65)
		{
			if (a[j] == b[i])
			{
				a[j] = b[i + 13];
				break;
			}
			i++;
		}
		j++;
	}
	return (a);
}
