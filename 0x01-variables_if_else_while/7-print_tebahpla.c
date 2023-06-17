#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point of process
 * prints lowercase alphabet in reverse
 * Return: Always 0(Success)
 */
int main(void)
{
	char revs;

	for (revs = 'z'; revs >= 'a'; revs--)
	{
		putchar(revs);
	}
	putchar('\n');
	return (0);
}
