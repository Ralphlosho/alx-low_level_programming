#include <stdio.h>

/**
 * main - prints number from 1 to 100 while replacing
 * multiples of 3 by 'Fizz', multiples of 5 by 'Buzz'
 * and multiple of both by 'FizzBuzz'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
				printf(" ");
			}
			else
			{
				printf("Fizz");
				printf(" ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 100 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
				printf(" ");
			}
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
		i++;
	}
	printf("\n");

	return (0);
}
