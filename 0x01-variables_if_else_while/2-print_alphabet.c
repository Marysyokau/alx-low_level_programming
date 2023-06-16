#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 * I sometimes suffer from insomnia. And when I can't fall asleep
 * Return: Always 0(Success)
 */ 
int main(void)
{
        char alph[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
        {
               putchar(alph[i]);
        }
	putchar('\n');
	return (0);
}
