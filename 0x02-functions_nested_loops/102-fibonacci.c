#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	unsigned long f1 = 0, f2 = 1, fn;

	for (n = 0; n < 50; n++)
	{
		fn = f1 + f2;
		printf("%lu", fn);
		f1 = f2;
		f2 = fn;
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
