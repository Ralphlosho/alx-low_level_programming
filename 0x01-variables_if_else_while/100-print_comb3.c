#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int num2;

	while (num <= 56)
	{
		for (num2 = num + 1; num2 <= 57; ++num2)
		{
			putchar(num);
			putchar(num2);
			if (num != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		++num;
	}
	putchar('\n');
	return (0);
}

