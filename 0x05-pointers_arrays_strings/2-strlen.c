#include "main.h"

/**
 * _strlen - provides string length
 * @s: string
 * Return: sting length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
