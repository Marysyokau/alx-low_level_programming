#include "main.h"
/**
 * string_toupper - changes string to uppercase
 * @str: string
 * Return: string in uppercase;
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
