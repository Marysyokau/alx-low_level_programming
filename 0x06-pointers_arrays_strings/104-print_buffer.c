#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: points to buffer
 * @size: size of buffer
 * Return: 0 (success)
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
				return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i); 
	}
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			printf("%02x",  (unsigned char)b[j]);
		}
		else 
		{
			printf(" ");
		}
		if (j % 2 != 0)
		{
			printf(" ");
		}
	}
	printf(" ");
	for (j = i; j < i + 10; j++)
	{
		if (j >= size)
		{
			break;
		}
		if (b[j] >= 32 && b[j] <= 126)
		{
			printf("%c", b[j]);
		}
		else
		{
			printf(".");
		}

	}
	printf("\n");

}
