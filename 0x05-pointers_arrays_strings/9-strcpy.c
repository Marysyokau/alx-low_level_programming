#include "main.h"

/**
 * *_strcpy - copy string
 * @src: source string
 * @dest: destination string
 * Return: string destination
 */

char *_strcpy(char *dest, char *src)
{
	char *initial_string = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (initial_string);
}
