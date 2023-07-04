#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: pointer variable
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i = 0, sn = 1;
	unsigned int val = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sn *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		val = (val * 10) + (s[i] - '0');
		i++;
	}
	val *= sn;
	return (val);
}
