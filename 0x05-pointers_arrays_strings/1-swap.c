#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer1
 * @b: integer two
 * Return: Sap answers
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
