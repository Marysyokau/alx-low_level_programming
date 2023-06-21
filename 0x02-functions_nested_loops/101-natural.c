#include <stdio.h>

/**
 * main - entry point
 * print natural numbers
 * Return: Always 0
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}i
		i++;
	}
	printf("%d\n", z);
	return (0);
}
