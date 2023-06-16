#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0(Success)
 */ 
int main(void)
{
         int i;

        for (i = 48; i < 58; i++)
        {
                putchar(i);
        }
	putchar('\n');
	return (0);
}
