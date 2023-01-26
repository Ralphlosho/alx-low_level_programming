#include <stdio.h>
#include "main.h"

/**
 * _isdigit - determines if a character with ascii code c
 * is a digit
 * @c: the ascii code of the character to be evaluated
 *
 * Return: if uppercase 1
 * if lowercase or otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}

	return (c);
}

