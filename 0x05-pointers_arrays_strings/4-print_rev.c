#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: string pointer
 * Return: reversed string
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	for (l = l - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
