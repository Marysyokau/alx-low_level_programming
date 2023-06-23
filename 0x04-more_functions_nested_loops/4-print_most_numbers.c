#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 * Description: prints all except 2 an 4
 * Return: numbers from 0 -9
 */

void print_most_numbers(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
	if (num == 2 || num ==4)
	{
	continue;
	}
	else
	{
	_putchar(num + '0');
	}	
	}	
	_putchar('\n');
}
