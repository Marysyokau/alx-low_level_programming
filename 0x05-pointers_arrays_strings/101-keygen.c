#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 * guess passward
 * Return: always 0(success)
 */

int main(void)
{
	char password[14];
	int index = 0, sum = 0, diff_half1, diff_half2;
	srand(time(0));
	while (sum < 2772)
	{
		password[index] =rand % 94;
		sum = password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
	}
	diff_half1 = (sum - 2772) / 2 ;
	diff_half2 = (sum - 2772) / 2 ;
	if ((sum - 2772) % 2 != 0)
		diff_half1++;
	for (index = 0; password[index]; index++)
	{
		if (password[index] >= (33 + diff_half1))
		{
			password[index] -= diff_half2;
			break;
		}
	}
	printf("%s", password);
	return (0);
}
