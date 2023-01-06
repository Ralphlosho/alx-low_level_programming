#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0; /*i is never incremented and < 10 always*/

	while (i < 10)
	{
		break;
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
