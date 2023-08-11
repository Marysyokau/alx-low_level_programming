#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read text from a file
 * @filename: file name
 * @letters: total count of letters to read
 * Return: 0 when null or actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *new;
	ssize_t num_read = 0;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	new = malloc(letters * sizeof(char));
	if (new == NULL)
	{
		fclose(fp);
		return (0);
	}
	num_read = fread(new, sizeof(char), letters, fp);
	printf("%s", new);

	free (new);
	fclose(fp);

	return (num_read);
}
