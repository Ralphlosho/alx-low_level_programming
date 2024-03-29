#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int j;

	j = 0;
	if (s[j] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[j]);
	_puts_recursion(s + 1);
}
