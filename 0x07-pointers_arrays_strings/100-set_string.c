#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer whose value is to be set
 * @to: value that s shoud have
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
