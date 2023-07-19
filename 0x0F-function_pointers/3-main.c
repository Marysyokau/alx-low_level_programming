#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * if the number of arguments is wrong, print Error, followed by a new line, and exit with 98
 * if the operator is none of the above, print Error, followed by a new line, and etatus 99
 * if the user tries to divide (/ or %) by 0, print Error,and exit with the status 100
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0(success)
 */

int main(void)
{
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	if(get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((*get_op =='/' || *get_op == '%' ) && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
	return (0);
}
