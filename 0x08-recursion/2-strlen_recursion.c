#include "main.h"

/**
 *  _strlen_recursion - determine length of string
 *  @s: string input
 *  Return: int length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
