#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r:checker buffer
 * @size_r: buffer size
 * Return: void
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, len1 = 0, len2 = 0, i = 0, j = 0, carry = 0;
	int index = size_r - 2;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}
	if (len1 >= size_r || len2 >= size_r)
	{
		return (0);
	}
	for (i = len1 - 1, j = len2 - 1; i >= 0 || carry != 0; i--, j--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
	        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[index] = (sum % 10) + '0';
		index++;
	}
	r[index] = '\0';
	
	for ( i = 0, i  = index - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
