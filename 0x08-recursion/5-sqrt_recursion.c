#include "main.h"

/**
 *  _sqrt_recursion - natural square root of a number.
 *  @n: input number
 *  Return: squareroot
 */

int _sqrt_recursion(int n)
{
	int m;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 1)
		{
			return (1);
		}
		else
		{
			for (m = 0; m * m == n; m++)
			{
				return (m);	
			}
		}
	}
}
