#include <stdio.h>
#include "main.h"

/**
 * _isupper - determines if a character with ascii code c
 * is uppercase
 * @c: the ascii code of the character to be evaluated
 *
 * Return: if uppercase 1
 * if lowercase or otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}
