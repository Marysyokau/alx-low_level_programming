#include <stdio.h>
#include <stdlib.h>
#inlude <time.h>
/**
 * main - Entry point 
 * The last digit
 * Return: Always 0(Success)
 */ 
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2 ;
        
        if ((n % 10) > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n,n % 10);
        }
        else if ((n % 10) < 6 && (n % 10) != 0)
        {
                printf("Lat digit of %d is %d and is less than 6 and not 0\n",
                        n, n % 10);
        }
        else
        {
                pintf("Lat digit of %d is %d and is 0\n", n, n % 10)
        }