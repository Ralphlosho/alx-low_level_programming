#include "main.h"

/**
 * leet - encodes a string into leet
 * @a: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *a)
{
	int i, j;
	char b[] = "aeotl";
	char c[] = "AEOTL";
	char d[] = "43071";

	j = 0;
	while (a[j] != '\0')
	{
		i = 0;
		while (i <= 4)
		{
			if (a[j] == b[i] || a[j] == c[i])
				a[j] = d[i];
			i++;
		}
		j++;
	}
	return (a);
}
