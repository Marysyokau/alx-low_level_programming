#include "main.h"

/**
 * is_prime_number - determine prime numbers
 * @n: checker digit
 * Return: 1 if prme 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	else
	{
		if (!(n % 2 == 0))
		{
			return (1);
		}
		else
		{
			if (n == 1)
			{
				return (1);
			}

		}
	}
}
