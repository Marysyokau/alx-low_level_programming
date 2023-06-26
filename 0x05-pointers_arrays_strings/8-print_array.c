#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: number to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
