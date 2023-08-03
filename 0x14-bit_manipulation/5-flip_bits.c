#include "main.h"

/**
 * flip_bits - counts number of bits to flip
 * from one bit to another
 * @n: first no
 * @m: second no
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int exclud = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = exclud >> i;
		if (new & 1)
			count++;
	}
	return (count);
}
