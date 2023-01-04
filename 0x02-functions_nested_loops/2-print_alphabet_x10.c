#include "main.h"

/**
 *
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase 
 * folowed by \n
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;
	i = 0;
	
	while (i < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
		i++;
	}

}
