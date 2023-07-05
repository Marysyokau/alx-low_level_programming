#include "main.h"

/**
 * factorial - factorial of a number
 * @n:int to determine factorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		else
		{
			return (factorial(n) * (n - 1));
		}
	}
}
