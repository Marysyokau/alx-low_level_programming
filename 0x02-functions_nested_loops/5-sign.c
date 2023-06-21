#include "main.h"

/**
 * print_sign - print the sign of a number
 * n is to be checked
 * Return: 1 for +ve, -1 for -ve and else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
