#include "main.h"
/**
 * _strcmp - compare two stringd
 * @s1: string one
 * @s2: string two
 * Return: comparison values
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
