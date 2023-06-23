#include "main.h"

/**
 * _isdigit - check for digit
 * @c: checker digit
 * Return: 1 if its digit 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
