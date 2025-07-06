#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - define a program that adds positive argv digits
 * @argc: count number of arguments passed to main
 * @argv: value of arguments passed to main
 * Return: 0 if successful, !0 if failure
 */
int main(int argc, char **argv)
{
	int i = 1;  /* Start at 1, since argv[0] is the program name */
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		char *arg = argv[i];
		int j = 0;
		int is_valid = 1;

		/* Check if current argv[i] is entirely digits */
		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				is_valid = 0;
				break;
			}
			j++;
		}

		if (!is_valid)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(arg);
		i++;
		}

	printf("%d\n", sum);
	return (0);
}

