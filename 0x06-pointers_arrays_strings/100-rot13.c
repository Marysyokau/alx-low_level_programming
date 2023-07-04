#include "main.h"

/**
 * rot13 - hat encodes a string using rot13.
 * @str: string
 * Return: always success
 */

char *rot13(char *str)
{
	int i, j;

	char alphA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphB[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphA[j] != '\0'; j++)
		{
			if (str[i] == alphA[j])
			{
				str[i] = alphB[j];
				break;
			}
		}
	}
	return (str);
}
