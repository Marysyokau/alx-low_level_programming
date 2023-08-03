#include "main.h"

/**
 * set_bit - sets index bit to 1
 * @n: pointer to number to change
 * @index: the index of the number
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index | *n);
	return (1);
}
