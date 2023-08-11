#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text from a file
 * @filename: file name
 * @letters: total count of letters to read
 * Return: 0 when null or actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *new;

	fp = fopen(filename, "r");

	if (fp == -1)
		return (0);
	new = fgets(filename);
	fprintf("%s", new);

	fclose(fp);
	return (new);
}
