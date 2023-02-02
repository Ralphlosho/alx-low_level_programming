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
	char b[79] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvw";

	b[62] = 120;
	b[63] = 121;
	b[64] = 122;
	b[65] = 97;
	b[66] = 98;
	b[67] = 99;
	b[68] = 100;
	b[69] = 101;
	b[70] = 102;
	b[71] = 103;
	b[72] = 104;
	b[73] = 105;
	b[74] = 106;
	b[75] = 107;
	b[76] = 108;
	b[77] = 109;

	j = 0;
	while (a[j] != '\0')
	{
		i = 0;
		while (i < 65)
		{
			if (a[j] == b[i] && b[i])
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
