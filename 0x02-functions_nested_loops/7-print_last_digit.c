#include "main.h"

/**
 * print_last_digit - last digit of a number
 * @c: checker number
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
