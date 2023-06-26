#include "main.h"

/**
 * puts_half - that prints half of a string, followed by a new line
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int j = 0, k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k = k + 1;
	}
	else
	{
		k = j / 2;
	}
	for (;k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
