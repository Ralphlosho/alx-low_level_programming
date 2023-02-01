#include "main.h"

/**
 * string_toupper - Turn all lower cases of a string into upper cases
 * @a: a string
 *
 * Return: a pointer to the string
 */
char *string_toupper(char *a)
{
	int i, j;

	j = 0;
	while (a[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (a[i] <= 122 && a[i] >= 97)
			a[i] = a[i] - 32;
	}
	return (a);
}
