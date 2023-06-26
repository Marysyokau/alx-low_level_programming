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
	int sign =  1;
	int result = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		sign++;
	}
	else if(*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
