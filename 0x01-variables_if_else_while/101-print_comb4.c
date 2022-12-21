#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int num2 = num + 1;
	int num3;

	while (num <= 55)
	{
		while (num2 <= 56)
		{
			for (num3 = num2 + 1; num3 <= 57; ++num3)
			{
				putchar(num);
				putchar(num2);
				putchar(num3);
				if (num != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
			++num2;
		}
		++num;
		num2 = num + 1;
	}
	putchar('\n');
	return (0);
}
