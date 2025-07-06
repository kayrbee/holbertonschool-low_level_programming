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
	char *arg;
	int i = 0;
	int current_digit = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	/* loop through every argv */
	while (i < argc)
	{
		arg = argv[i];
		int j = 0;
		int non_digit_detected = 0;

		/* loop through array of current argv */
		while (arg[j] != '\0' && non_digit_detected == 0)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				non_digit_detected = 1;
			}
			j++;
		}
		if (non_digit_detected == 1)
		{
			printf("Error\n");
			return (1);
		}

		current_digit = atoi(arg);
		sum = sum + current_digit;
		i = i + 1;
		j = 0;
	}
	printf("%d\n", sum);
	return (0);
}
