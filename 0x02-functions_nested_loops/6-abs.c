#include "main.h"

/**
 * _abs - find absolute value of int
 * c the checker number
 * Return: absolute value
 */

int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
