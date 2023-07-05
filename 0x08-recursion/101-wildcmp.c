#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: ther 1 0r 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
		{
			s2++;
			if (*s2 == '\0')
			{
				return (1);
			}
			while (*s1 != '\0')
			{
				if (wildcmp(s1, s2))
				{
					return (1);
				}
				s1++;
			}
			return (0);
		}
		 return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
