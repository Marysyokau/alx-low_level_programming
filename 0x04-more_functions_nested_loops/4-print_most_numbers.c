#include "main.h"

/**
 * print_most_numbers - print numbers
 * Description: except 2 and 4
 * Return: The numbers
 */

void print_most_numbers(void)
{
	int x = 0;

	for(; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
