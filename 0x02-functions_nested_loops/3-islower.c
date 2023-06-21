#include "main.h"

/**
 * _islower - print lowercase letters
 * @c: checker character
 * Return: Always 1(lowercase) 0(not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
