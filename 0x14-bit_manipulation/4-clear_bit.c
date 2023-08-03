#include "main.h"

/**
 * clear_bit - sets the value of certain index to 0
 * @n: pointer to the change number
 * @index: index of bit to clear
 * Return: 1 if success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index);
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
