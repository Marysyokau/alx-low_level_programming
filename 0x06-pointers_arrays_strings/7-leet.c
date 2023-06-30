#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 * @str: string input
 * Return: new string
 */

char *leet(char *str)
{
	int index = 0, i = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	for (i = 0; i < index; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
