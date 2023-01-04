#include <stdio.h>

/**
* main - Lists all multiples of 3 or 5 strictly below 1024
*
* Return: Always 0.
*/
int main(void)
{
	int mult = 0;

	int n = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			mult += n;
		n++;
	}
	printf("%d\n", mult);
	return (0);
}
