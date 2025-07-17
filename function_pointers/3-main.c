#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function of operator
 * @argc: number of arguments provided at run time
 * @argv: array of arguments provided at run time
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*operator)(int, int);
	int result = 0;

	operator = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operator(a, b);

	printf("%d\n", result);

	return (0);
}

