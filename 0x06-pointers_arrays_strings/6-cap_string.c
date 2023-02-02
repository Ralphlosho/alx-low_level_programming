#include "main.h"

/**
 * cap_string - capitalizes each word in a string
 * @a: poiter to an array of string to be capitalized
 *
 * Return: the transformed string
 */
char *cap_string(char *a)
{
	int i, j, k;
	char b[] = ",;.!?\"() \n	{}";

	j = 0;
	while (a[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (i == 0 && a[i] <= 122 && a[i] >= 97)
			a[i] = a[i] - 32;
		if (i != 0 && a[i] <= 122 && a[i] >= 97)
		{
			k = 0;
			while (k <= 12)
			{
				if (a[i - 1] == b[k])
				{
					a[i] = a[i] - 32;
					break;
				}
				k++;
			}
		}
	}
	return (a);
}
