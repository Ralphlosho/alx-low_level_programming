#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	char beta;

	for (alph = 'a'; alph <= 'z'; ++alph)
	{
		putchar(alph);
	}
	for (beta = 'A'; beta <= 'Z'; ++beta)
	{
		putchar(beta);
	}
	putchar('\n');
	return (0);
}

