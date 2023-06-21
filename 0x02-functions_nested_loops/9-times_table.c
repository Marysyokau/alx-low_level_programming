#include "main.h"

/**
 * times_table - time table
 * Return: the multiplier output
 */

void times_table(void)
{
	int m, n, x, y, z;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			x = m * n;
			if (x > 9)
			{
				y = x % 10;
				z = (x - y) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (n != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(x + '0');
			}
		}
	}
	_putchar('\n');
}
