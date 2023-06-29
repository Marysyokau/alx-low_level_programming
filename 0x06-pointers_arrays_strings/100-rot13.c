#include "main.h"

/**
 * rot13 - hat encodes a string using rot13.
 * @str: string
 * Return: always success
 */

char *rot13(char *str)
{
	char *init = str;
	char *result = str;

	while (*init != '\0')
	{
		char new = *init;
		if ((new >= 'a' && new <= 'm') || (new >= 'A' && new <= 'M'))
		{
			*result = new + 13;
		}
		else if ((new >= 'n' && new <= 'z') || (new >= 'N' && new <= 'z'))
		{
			*result = new - 13;
		}
		else
		{
			*result = new;
		}
		init++;
		result++;
	}
	result = '\0';
	return str;
}
