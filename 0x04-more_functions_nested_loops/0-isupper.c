#include "main.h"

/**
 * int _isupper - checks uppercase letters
 * @c: checker character
 * Return: 1 for uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
