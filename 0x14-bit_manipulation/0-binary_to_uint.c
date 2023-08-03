#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned
 * @b: pointer variable to string of 0's and 1's
 * Return: converted int or 0 if b is null or the
 * presence of non 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ret_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		ret_val = 2 * ret_val + (b[i] - '0');
	}
	return (ret_val);
}
