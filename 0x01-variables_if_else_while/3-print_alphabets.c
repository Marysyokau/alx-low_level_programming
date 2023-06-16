#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 * alphABET
 * Return: Always 0(Success)
 */ 
int main(void)
{
        char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 52; i++)
        {
                putchar(alph[i]);
        }
	putchar('\n');
	return (0);
}
