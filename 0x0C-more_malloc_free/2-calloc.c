#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: the size of each element
 * Return: eturns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	mem = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (mem == 0)
		return (NULL);
	for (i = 0; i < nmemb *size; i++)
		*(mem + i) = 0;
	return ((void *)mem);
}
