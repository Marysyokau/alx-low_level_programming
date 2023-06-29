#include "main.h"
/**
 * reverse_array - reverse the content in an array
 * @a: array
 * @n: void reverse_array(int *a, int n);
 * Return:reversed array
 */

void reverse_array(int *a, int n)
{
	int new, index;

	for ( index = n -1; index >= n / 2; index--)
	{
		new = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = new;
	}
}
