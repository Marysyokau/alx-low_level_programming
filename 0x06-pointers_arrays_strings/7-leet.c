#include "main.h"

/**
 * leet -  function that encodes a string
 * @str: string input
 * Return: new string
 */

char *leet(char *str)
{
	int i = 0, j, k;
	char orig[] = "oOlLeEaAtT";
	char repArr[] = "0011334477";

	while (str[i] != '\0')
	{
		k = 0;
		j = 0;
		while (orig[j] != '\0')
		{
			if (str[i] == orig[j])
			{
				k = j;
				str[i] = repArr[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
