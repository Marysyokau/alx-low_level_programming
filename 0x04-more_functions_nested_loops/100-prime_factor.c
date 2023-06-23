#include <stdio.h>
#include <math.h>

/**
 * main - entry point 
 * print largest number
 * Return: Always 0(success)
 */

int main(void)
{
	long x, maxp;
	long num = 612852475143;
	long square = sqrt(num);

	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			maxp = num / x ;
		}
	}
	printf("%ld\n", maxp);
	return (0);
}
