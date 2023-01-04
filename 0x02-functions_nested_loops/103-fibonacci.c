#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	unsigned long f1 = 0, f2 = 1, fn, sum = 0;

	for (n = 0; n <= 32; n++)
	{
		fn = f1 + f2;
		if ((fn % 2) == 0)
			sum = sum + fn;
		f1 = f2;
		f2 = fn;
	}
	printf("%lu\n", sum);
	return (0);
}

