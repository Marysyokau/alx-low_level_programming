#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: pointer to the text to write into file
* Return: 1 if success, -1 if fail
*/

int create_file(const char *filename, char *text_content)
{
if (filename == NULL)
return (-1);

FILE *fp = fopen(filename, "w");

if (fp == NULL)
return (-1);

if (text_content != NULL)
{
size_t len = strlen(text_content);
size_t written = fwrite(text_content, sizeof(char), len, fp);
if (written != len)
{
fclose(fp);
return (-1);
}
}

fclose(fp);
return (1);
}
