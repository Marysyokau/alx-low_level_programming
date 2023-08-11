#include "main.h"
#include <stdio.h.>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: pointer to the text to write into file
 * Return: file with contents
 * -1 if success or --1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int *fp;
	int len = 0;

	fp = fopen(filename, "w");
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while(text_content[len])
		{
			len++;
		}
	}

	fp = fopen(filename, "w");

	char ch[];

	while ((ch = getchar()) != EOF)
	{
		putc(ch, fp);
	}
	fclose(fp);
}
