#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - Entry point of program
 * prints all numbers of base 16 in lower case
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i <6; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
